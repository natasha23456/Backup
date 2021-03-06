/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkidd <nkidd@student.42adel.org.au>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:10:18 by nkidd             #+#    #+#             */
/*   Updated: 2022/07/16 17:38:25 by nkidd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int ft_isupper(char character)
{
    if(character >= 'A' && character <= 'Z')
        return (character);
    return (0);
}
