/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:58:43 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/03/28 23:18:53 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = next;
	}
	*lst = NULL;
}
/*
void ft_del(void *content)
{
	//printf("%s\n", content);
	free(content);
	content = NULL;
}

void	ft_print_list(t_list **lista)
{
	t_list *temp;
	temp = *lista;

	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}

}

int	main(void)
{
	t_list	*lista;
	t_list	*elem1;
	t_list	*elem2;
	char	*test;
	char	*test2;

	test = malloc(sizeof(char *) * 2);
	test[0] = 'a';
	test[1] = '\0';
	test2 = malloc(sizeof(char *) * 2);
	test2[0] = 'a';
	test2[1] = '\0';

	lista = NULL;
	elem1 = malloc(sizeof(t_list));
//	printf("malloc: %p\n", elem1->content);
	elem1->content = (void *)test;
//	printf("malloc: %p\n", elem1->content);
	elem1->next = NULL;
	ft_lstadd_front(&lista, elem1);


	elem2 = malloc(sizeof(t_list));
	elem2->content = (void *)test2;
	elem2->next = NULL;
	ft_lstadd_back(&lista, elem2);

	ft_print_list(&lista);
	ft_lstclear(&lista, &ft_del);
	ft_print_list(&lista);
	return (0);
}
*/
