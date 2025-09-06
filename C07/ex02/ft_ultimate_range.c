/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:15:08 by npascal           #+#    #+#             */
/*   Updated: 2025/09/01 09:14:55 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

/*int	main()
{
	int	*arr;
	int	size;
	int	i;

	size = ft_ultimate_range(&arr, 10, 60);
	printf("%d", size);
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
