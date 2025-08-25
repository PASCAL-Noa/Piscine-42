/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:37:35 by npascal           #+#    #+#             */
/*   Updated: 2025/08/19 11:16:51 by npascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[] = "noa";
	char src[] = "pascal";

	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s", strncat(dest, src, 3));
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest ++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
