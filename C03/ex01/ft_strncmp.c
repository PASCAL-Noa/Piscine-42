/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:41:32 by npascal           #+#    #+#             */
/*   Updated: 2025/08/23 10:50:48 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "cacahuetes";
	char s2[] = "cacahuete";
	unsigned int i;

	i = 10;
	printf("%d\n", ft_strncmp(s1, s2, i));
	printf("%d", strncmp(s1, s2, i));
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && s1[i] && i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
