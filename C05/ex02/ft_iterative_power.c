/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:11:03 by npascal           #+#    #+#             */
/*   Updated: 2025/08/22 12:02:54 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

/*#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(2, 3));
}*/

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
