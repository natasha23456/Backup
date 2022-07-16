/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:34:54 by nkidd             #+#    #+#             */
/*   Updated: 2022/07/15 22:58:14 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int number, int fd)
{
    long    nbr;

    nbr = (long)number;
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = -nbr;
    }
    if (nbr >= 10)
    {
        ft_putnbr_fd(nbr / 10, fd);
        ft_putnbr_fd(nbr % 10, fd);
    }
    else 
        ft_putchar_fd(nbr + '0', fd);
}
