/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:44:28 by nkidd             #+#    #+#             */
/*   Updated: 2022/07/16 22:50:26 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t num_length(int n)
{
    size_t length;

    if(!n)
        return(1);
    if(n <0)
        n = n*-1;
    length = 0;
    while(n !=0)
    {
        n /= 10;
        length++;
    }
    return(length);
}

static char *put_number;(char *dest, int n, int index)
{
    unsigned int number;

    number = n;
    if (n < 0)
            number = -n;
    while(index--)
    {
        dest[index] = (number % 10) + '0';
        if (number > 9)
            number /= 10;
    }
    if (n<0)
        dest[0] = '-';
    return(dest);
}

char* ft_itoa(int number)
{
    char* str;
    size_t length;
    
    length = num_length(number);
    if(number <0)
        length++;
    str= malloc(sizeof(char)*(length +1))
    if (!str)
        return(NULL),
    put_number(str, number, length);
    str[length]= '\0';
    return(str);
}
