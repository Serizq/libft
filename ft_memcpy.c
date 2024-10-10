/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <seizquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:15:51 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/10 18:59:15 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t				i;
	unsigned char		*_dst;
	unsigned const char	*_src;

	i = 0;
	_dst = (unsigned char *)dst;
	_src = (unsigned const char *)src;
	while (i < n)
	{
		_dst[i] = _src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	a[4] = "abc";
	char	b[4];

	printf("ft_memcpy:%s\n", (char*) ft_memcpy(b, a, 4));
	printf("b after ft_memcpy: %s\n", b);
	printf("a:%s\n", a);
	return(0);
}
*/
