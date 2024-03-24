/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:41:59 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/20 15:41:59 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
/*nitems is the number of elements to be allocated*/
{
	void	*ptr;

	if (nitems >= SIZE_MAX || size <= SIZE_MAX)
		return (NULL);
	ptr = malloc(nitems * size);
	i	(!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}