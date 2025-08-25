/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:16:10 by npascal           #+#    #+#             */
/*   Updated: 2025/08/21 17:19:30 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_len_str(char *str);
int		ft_check_base(char *base);
void	ft_putnbr_base(int nbr, char *base);

/*#include <stdio.h>
int	main(void)
{
	int	nbr = 8;

	char	base[] = "01";

	ft_putnbr_base(nbr, base);
}*/

int	ft_len_str(char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str] != '\0')
		len_str++;
	return (len_str);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	len_base;

	len_base = ft_len_str(base);
	if (len_base < 2)
		return (0);
	i = 0;
	while (i < len_base)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len_base;
	char	digit;

	if (!ft_check_base(base))
		return ;
	len_base = ft_len_str(base);
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= len_base)
		ft_putnbr_base(n / len_base, base);
	digit = base[n % len_base];
	write(1, &digit, 1);
}
