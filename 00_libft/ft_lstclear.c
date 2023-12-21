/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:25:41 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/21 22:39:48 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ticker;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		ticker = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ticker;
	}
	free(*lst);
	*lst = NULL;
}
