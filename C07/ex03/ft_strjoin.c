/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 08:33:27 by npascal           #+#    #+#             */
/*   Updated: 2025/09/01 15:36:25 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;
	int	sep_len;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

void	ft_concat_strings(char *result, int size, char **strs, char *sep)
{
	int	i;

	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*empty_str;
	int		total_len;

	if (size == 0)
	{
		empty_str = (char *)malloc(1);
		if (!empty_str)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	total_len = ft_total_len(size, strs, sep);
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	ft_concat_strings(result, size, strs, sep);
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	size = 4;
	char	*strs[] = {"Noa", "Le", "GOOAAT", "!!"};
	char	sep[] = ", ";
	printf("%s ", ft_strjoin(size, strs, sep));
}*/
