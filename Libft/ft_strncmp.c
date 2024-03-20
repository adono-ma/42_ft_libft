/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:11:20 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/20 19:11:20 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned char   *s1;
    unsigned char   *s2;
    size_t          i;

    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    i = 0;
    if (n == 0)
        return (0);
    while ((s1[i] != '\0') && (i != n - 1))
    {
        if (s1[i] != s2[i])
            return  (s1[i] - s2[i]);
        i++;
    }
    return  (s1[i] - s2[i];)    
}