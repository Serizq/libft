/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seizquie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:18:36 by seizquie          #+#    #+#             */
/*   Updated: 2024/10/04 17:18:47 by seizquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if(s == NULL)
    {
        return(NULL);
    }
    while(s[i] != '\0')
    {
        if(s[i] == (char)c)
        {
            return((char *)&s[i]);
        }
        i++;
    }
    if(s[i] == (char)c)
    {
        return((char *)&s[i]);
    }
    return(NULL);
}
/*
int main()
{
    char *str = "abcde";

    printf("Value: %s\n", ft_strchr(str, 'h'));
    return(0);
}
*/
