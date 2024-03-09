/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:22:11 by adono-ma          #+#    #+#             */
/*   Updated: 2024/01/26 13:42:29 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    "libft.h"

int ft_isprint(int i)
{
         if ((i >= 32 && i <= 126))
            return (1);
    return (0);
}