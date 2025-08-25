/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 08:10:43 by npascal           #+#    #+#             */
/*   Updated: 2025/08/22 14:28:49 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_str(char *str);
int	ft_check_base(char *base);
int	ft_check_signe(char *str, int *i);
int	ft_atoi_base(char *str, char *base);

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("f","0123456789abcdef"));
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	signe;
	int	value;
	int	len_base;

	if (!ft_check_base(base))
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	signe = ft_check_signe(str, &i);
	len_base = ft_len_str(base);
	value = 0;
	while (str[i])
	{
		j = 0;
		while (j < len_base && base[j] != str[i])
			j++;
		if (j == len_base)
			break ;
		value = value * len_base + j;
		i++;
	}
	return (value * signe);
}

int	ft_len_str(char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str] != '\0')
		len_str++;
	return (len_str);
}

int	ft_check_signe(char *str, int *i)
{
	int	signe;

	signe = 1;
	while (str[(*i)] == '+' || str[(*i)] == '-')
	{
		if (str[(*i)] == '-')
			signe *= -1;
		(*i)++;
	}
	return (signe);
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
