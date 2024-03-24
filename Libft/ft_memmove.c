/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:22:17 by adono-ma          #+#    #+#             */
/*   Updated: 2024/01/26 13:42:29 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srccpy;
	unsigned char	*destcpy;

	srccpy = (unsigned char *)src;
	destcpy = (unsigned char *)dest;
	i = 0;
	if (srccpy == 0 && destcpy == 0)
		return ("");
	if (dest > src)
	{
	 while (n-- != 0)
		destcpy[n] = srccpy[n];        
	}
	else
	{
		while (i < n)
		{
			destcpy[i] = srccpy[i];
			i++;
		}
	}
	return (dest);
}
/*
int main    ()
{
	char dest[] = "loanterior";
	const char src[] = "elquesigue";

	printf("prev ft_memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 10);
	printf("next ft_memmove dest = %s, src = %s\n", dest, src);

	return(0);
}
*/