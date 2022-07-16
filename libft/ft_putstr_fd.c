/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:54:51 by nkidd             #+#    #+#             */
/*   Updated: 2022/07/15 21:18:16 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *string, int fd)
{
    long    index;

    index = 0;
    while(string[index] != '\0')
    {
        ft_putchar_fd(string[index], fd);
        index++;
    }
}
