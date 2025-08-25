/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:26:35 by npascal           #+#    #+#             */
/*   Updated: 2025/08/14 11:28:23 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

/*int	main(void)
{
	ft_putnbr(42);
}*/

void	ft_putnbr(int nb)
{
	unsigned int	tmp;
	char			tmp1;

	tmp = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		tmp = -nb;
	}
	if (tmp <= 9)
	{
		tmp += 48;
		write(1, &tmp, 1);
	}
	else
	{
		ft_putnbr(tmp / 10);
		tmp1 = tmp % 10 + 48;
		write(1, &tmp1, 1);
	}
}
