/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:48:14 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/20 17:48:14 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)/*looks for the last occurrence of c*/
{
	int				len;
	unsigned char	*cpy;

	len = (unsigned char *)str;
	cpy = ft_strlen(str);
	while (len >= 0)
	{
		if (cpy[len] == (unsigned char)c)
			return ((char *)len + cpy);
		len--;
	}
	return (0);
}