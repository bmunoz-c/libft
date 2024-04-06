/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:37:08 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/03/28 22:29:19 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*lista;
	t_list	*elem1;
	t_list	*elem2;

	lista = NULL;
	elem1 = malloc(sizeof(t_list));
	elem1->content = "Borja";
	elem1->next = NULL;
	elem2 = malloc(sizeof(t_list));
	elem2->content = "Miriam";
	elem2->next = NULL;
	ft_lstadd_front(&lista, elem1);
	ft_lstadd_back(&lista, elem2);
	lista = ft_lstlast(lista);
	printf("%s\n", lista->content);
	return (0);
}
*/
