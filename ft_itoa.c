/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:39:11 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/24 22:53:02 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		len = ft_len(n);
		str = ft_calloc(sizeof(char) * (len + 1), 1);
		if (!str)
			return (0);
		if (n < 0)
		{
			str[0] = '-';
			n *= -1;
		}
		while (n > 9)
		{
			str[(--len)] = (n % 10) + '0';
			n /= 10;
		}
		if (n < 10)
			str[len - 1] = n + '0';
	}
	return (str);
}
