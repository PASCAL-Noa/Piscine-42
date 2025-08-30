/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:16:13 by npascal           #+#    #+#             */
/*   Updated: 2025/08/26 14:47:45 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *argv[]);

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_print_program_name(argv);
}

void	ft_print_program_name(char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
