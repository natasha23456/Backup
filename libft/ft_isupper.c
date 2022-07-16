/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:10:18 by nkidd             #+#    #+#             */
/*   Updated: 2022/07/15 23:11:53 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int ft_isupper(char c)
{
    if(c >= 'A' && c <= 'Z')
        return (c);
    return (0);
}
