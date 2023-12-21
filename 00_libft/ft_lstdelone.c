/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:30:03 by gcampbel          #+#    #+#             */
/*   Updated: 2023/12/21 22:24:22 by gcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* `lstdelone` takes a node as a parameter and frees the memory of the node's
 * content using the fn `del` given as a parameter and frees the node.
 * the memory of <next> must NOT be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
static void	printlst(t_list *lst)
{
	while (lst)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
}

static void	wipe(void *content)
{
	free(content);
}

int	main(void)
{
	char	h[] = "hello";
	char	w[] = " world";
	t_list	*l1 = ft_lstnew(h);
	printf("The first element is: \"%s\n\"", h);
	printf("The second element is: \"%s\n\"", w);
	t_list	*l2 = ft_lstnew(w);
	ft_lstadd_back(&l1, l2);
	printf("The combined list is: \"");
	printlst(l1);
	printf("\"\n");
	printf("The element to be removed is: \"");
	printlst(l2);
	printf("\"\n");
	ft_lstdelone(l2, wipe);
	printf("The post-deletion list is: \"");
	printlst(l1);
	printf("\"\n");
}*/