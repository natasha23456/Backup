/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:50:49 by nkidd             #+#    #+#             */
/*   Updated: 2022/07/16 22:23:34 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sum;
    int sign;
    int found;

    sum = 0;
    sign = 1;
    found = 1;
    while (*str == ' '||*str == '\n'||*str == '\f'
        ||*str == '\r'||*str == '\v'||*str == '\t')
        str ++;
    if (*str == '-')
        sign = -1;
    if (*str == '-'||*str == '+')
        str++;
    while (*str && found)
    {
        if(ft_isdigit(*str))
            sum= sum * 10 + *str-'0';
        else
            found=0;
        str++;
    }
        return(sign * sum)
}

}

