/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:06:28 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 22:00:10 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n);
{
    size_t  i;
    unsigned char   *s;

    s = (unsigned char *)str;
    i = 0;
    while (i < n)
    {
        s[i] = c;
        i++;
    }
    return  (str);
}