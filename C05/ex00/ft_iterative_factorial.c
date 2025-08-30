/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 08:03:46 by npascal           #+#    #+#             */
/*   Updated: 2025/08/22 08:42:38 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
}*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
