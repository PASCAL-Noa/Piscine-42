/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:01:40 by npascal           #+#    #+#             */
/*   Updated: 2025/09/03 19:08:46 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tb(int ac, char **av)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(t_stock_str) * ac + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = malloc(sizeof(char) * tab[i].size);
		if (!tab[i].str)
			return (NULL);
		tab[i].str = av[i];
		tab[i].cpy = ft_strdup(av[i]);
		if (!tab[i].cpy)
			return (NULL);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
