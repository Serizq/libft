/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <seizquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:19:14 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/12 16:09:37 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen((char *)s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	trimed = ft_substr(s1, start, end - start + 1);
	if (trimed == NULL)
		return (NULL);
	else
		return (trimed);
}
/*
int	main(void)
{
	char	s[] = "ddlrQué haces  Sergio?ddeet";
	char	set [] = "dlrte";

	printf("%s", ft_strtrim(s, set));
	return (0);
}*/
