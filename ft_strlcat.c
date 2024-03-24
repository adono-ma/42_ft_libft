/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:03:00 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 22:14:49 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	destn;
	size_t	srcn;
	size_t	i;

	destn = ft_strlen(dest);
	srcn = ft_strlen(src);
	i = 0;
	if (dest == 0 && n == 0)
		return (n + srcn);
	if (n > destn)
	{
		while (*src != 0 && i < (n - destn - 1))
		{
			dest[destn + i] = *src;
			src++;
			i++;
		}
		dest[destn + i] = 0;
		return (destn + srcn);
	}
	else
		return (n + srcn);
}
