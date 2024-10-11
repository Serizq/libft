/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <seizquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:34:56 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/11 19:12:38 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	m = malloc((len + 1) * sizeof(char));
	if ((!s1) || (!s2))
		return (NULL);
	if (!m)
		return (NULL);
	ft_strlcpy(m, s1, len + 1);
	ft_strlcat(m, s2, len + 1);
	return (m);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*m;

	str1 = "Hola";
	str2 = " Sergio";
	m = ft_strjoin(str1, str2);
	printf("%s\n", m);
	return (0);
}*/
