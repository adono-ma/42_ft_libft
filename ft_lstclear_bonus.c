/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:02:22 by adono-ma          #+#    #+#             */
/*   Updated: 2024/05/23 16:02:22 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	while	(*lst)
	{
		node = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}