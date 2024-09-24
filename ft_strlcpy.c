/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:57:00 by seizquie          #+#    #+#             */
/*   Updated: 2024/09/23 18:46:17 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned long size_t;

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
        int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i <= dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';

	return (src_len);
}
