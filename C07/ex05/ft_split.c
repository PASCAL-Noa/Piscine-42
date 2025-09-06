/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 09:11:00 by npascal           #+#    #+#             */
/*   Updated: 2025/09/01 15:39:07 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset != c && *charset)
		charset++;
	return (*charset == c);
}

int	count_words(char *str, char *charset)
{
	int	nb;

	nb = 0;
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		while (!is_sep(*str, charset) && *str)
			str++;
		nb++;
	}
	return (nb);
}

char	**init_res(int words, char *str, char *charset)
{
	int		i;
	char	**res;
	int		len;

	len = 0;
	res = malloc(sizeof(char *) * (words + 1));
	while (*str && words)
	{
		i = 0;
		while (is_sep(*str, charset) && *str)
			str++;
		while (!is_sep(*str, charset) && *str)
		{
			str++;
			i++;
		}
		if (i != 0)
			res[len] = malloc(sizeof(char) * (i + 1));
		len++;
	}
	res[len] = NULL;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		len;

	i = 0;
	len = 0;
	res = init_res(count_words(str, charset), str, charset);
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		while (!is_sep(*str, charset) && *str)
		{
			res[len][i] = *str;
			str++;
			i++;
		}
		if (i != 0)
			res[len][i] = '\0';
		i = 0;
		len++;
	}
	return (res);
}
