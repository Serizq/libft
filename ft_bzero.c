/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:57:36 by seizquie          #+#    #+#             */
/*   Updated: 2024/09/27 20:17:28 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*int	main(void)
{
	char	str[] = "42 Madrid";
	size_t	len = 3;

	printf("Original: %s\n", str);
	ft_bzero(str, len);
	printf("Final text: %s\n", str);
	return (0); 
}*/

