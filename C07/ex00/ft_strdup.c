/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:57:32 by npascal           #+#    #+#             */
/*   Updated: 2025/08/27 08:40:41 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

/*int	main()
{
	char	*tab;
	int	i;

	i = 0;
	tab = ft_strdup("noa pascal");
	while (tab[i])
	{
		printf("%c", tab[i], 1);
		i++;
	}
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		src_len;

	src_len = ft_strlen(src) + 1;
	cpy = (char *) malloc(src_len * sizeof(char));
	ft_strcpy(cpy, src);
	return (cpy);
}
