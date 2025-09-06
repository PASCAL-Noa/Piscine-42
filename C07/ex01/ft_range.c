/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 08:32:21 by npascal           #+#    #+#             */
/*   Updated: 2025/09/01 09:13:21 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

/*int	main()
{
	int min, max;
	min = 2;
	max = 5;
	int	*tab;
	int	size = max - min;
	tab = ft_range(min, max);
	for(int i = 0; i < size; i++)
		printf("%d", tab[i]);
	free(tab);
}*/

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	value;

	if (min >= max)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	value = min;
	i = 0;
	while (value < max)
	{
		tab[i] = value;
		i++;
		value++;
	}
	return (tab);
}
