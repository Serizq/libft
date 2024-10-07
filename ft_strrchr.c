/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:21:26 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/04 17:21:39 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);

    if(s == NULL)
    {
        return(NULL);
    }
    while(i >= 0)
    {
        if(s[i] == (char)c)
        {
            return((char *)&s[i]);
        }
        i--;
    }
    return(NULL);
}
/*
int main()
{
    char *str = "ABCADE";

    printf("value: %s\n", ft_strrchr(str, 'j'));
    return(0);
}
*/
