/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:11:31 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/03/28 22:29:32 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
int	main()
{
	t_list	*lst;
    t_list	*elem1;
	t_list	*elem2;

	lst = NULL;
	elem1 = malloc(sizeof(t_list));
	elem1->content = "primero";
	elem1->next = NULL;
	ft_lstadd_front(&lst, elem1);
	elem2 = malloc(sizeof(t_list));
    elem2->content = "segundo";
    elem2->next = NULL;
    ft_lstadd_front(&lst, elem2);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
    return (0);
}
*/
