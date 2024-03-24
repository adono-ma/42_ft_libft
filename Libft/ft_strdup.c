/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:44:11 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/24 17:39:28 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (src[i] != '\0')
	{
		str[i] = (char)src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
