/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:48:14 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/20 17:48:14 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *str, int c)
{
    int             i;
    unsigned char   *cpy;

    i = 0;
    cpy = (unsigned char    *)str;
    while (cpy[i] != '\0')
    {
        if (cpy[i] == (unsigned char)c)
            return ((char *)cpy + i);
        i++;        
    }
    if (cpy[i] == (unsigned char)c)
        return ((char *)cpy + i);
    else
        return (0);    
}