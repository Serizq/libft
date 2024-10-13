/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <seizquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:31:44 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/13 19:55:08 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > (i + j) && haystack[i + j]
			&& needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
/*int	main(void)
{
	const char	largestring[] = "42 Madrid WELCOME";
	const char	smallstring[] = "42";
	size_t	len = 20;
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, len);
	printf("%s", ptr);
	return (0);
}*/
