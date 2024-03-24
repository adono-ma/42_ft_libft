/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:54:07 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 22:14:48 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	count;
	char	*cpy;
	
	i = 0;
	count = ft_strlen(src);
	cpy = (char *)src;
	if	(n == 0)
		return(count);
	while	(cpy[i] != '\0' && i < (n - 1))
	{
	dest[i] = cpy[i];
	i++;
	}
	dest[i] = '\0';
	return (count);
}