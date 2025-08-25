/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:29:47 by npascal           #+#    #+#             */
/*   Updated: 2025/08/14 10:20:28 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

/*int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(35);
}*/

void	ft_is_negative(int n)
{
	char	res;

	if (n < 0)
	{
		res = 'N';
	}
	else
	{
		res = 'P';
	}
	write(1, &res, 1);
}
