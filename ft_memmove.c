/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <seizquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:16:34 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/10 18:59:18 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*_dst;
	unsigned const char	*_src;

	i = 0;
	_dst = (unsigned char *)dst;
	_src = (unsigned const char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (_dst > _src)
	{ // n empieza con el valor asignado en el while,pero ya entra en _dst y _src como n-1 (post decrement operator)
		while (n--)
		{
			_dst[n] = _src[n];
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
/*
int	main(void)
{
	char ss[15] = "ABCDE";
	char dd[] = "1234";
	size_t aa = 4;

	printf("el memmove da:%s\n", (char*)ft_memmove(ss, dd, aa));
	return(0);
}*/
