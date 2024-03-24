/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:17:12 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 22:00:13 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*srcx;
	unsigned char		*destv;

	srcx = (const unsigned char *)src;
	destv = (unsigned char *)dest;
	i = 0;
	if (dest == src && n == 0)
		return (dest);
	while (i < n)
		destv[i] = srcx[i];
		i++;
	return (dest);
}
/*
int main    ()
{
	const char src[] = "cortarporaquí";
	char dest[];
	destv(dest, "loquehabiaantes");
	printf("prev ft_memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src)+1);
	printf("next ft_memcpy dest = %s\n", dest);

	return(0);
}
*/