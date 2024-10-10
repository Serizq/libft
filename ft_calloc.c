/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <seizquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:56:48 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/08 19:09:50 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	_totalsize;
	void	*ptr;
// SIZE_MAX es el valor máximo de size_t
	if(size != 0 && nmemb > SIZE_MAX / size) // compruebo que no hay desbordamiento
	{
		return (NULL);
	}
	_totalsize = nmemb * size;
	ptr = malloc(_totalsize);
	if (ptr == NULL);
	{
		return (NULL);
	}
	ft_bzero(ptr, _totalsize);
	return (ptr);
}
/*int	main(void)
{
	int	*ptr;
	ptr = ft_calloc(20, sizeof(int));
	*ptr = 20;
	printf("Allocated memory address: %p\n", ptr);
	printf("value of the variable: %d", *ptr);
	return (0);
}*/