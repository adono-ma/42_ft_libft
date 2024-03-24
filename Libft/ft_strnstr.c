/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:33:38 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/22 21:34:00 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || ft_strlen(needle) > n)
		return (0);
	while ((char)haystack[i] != '\0')
	{
		j = 0;
		while ((char)haystack[i + j] == (char)needle[j] && (i + j) < n)
		{
			if ((char)haystack[i + j] == '\0' && (char)needle[j] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		if ((char)needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}