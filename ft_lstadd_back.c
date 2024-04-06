/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:53:05 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/03/28 22:29:25 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*lst);
	if (*lst)
		tmp->next = new;
	else
		*lst = new;
}
/*
								EXPLICACION:
	- Utilizar lstlast para obtener el ultimo elemento de la lista.
	- Si last es NULL, no hay lista, configuramos el puntero de la lista -> new elemento.
	- Si hay lista, configuramos la siguiente variable del ultimo -> new elemento.

*/
/*
int	main(void)
{
	t_list	*lista;
	t_list	*first;
	t_list	*last;

	lista = NULL;
	first = malloc(sizeof(t_list));
	first->content = "Hola";
	first->next = last;
	ft_lstadd_back(&lista, first);
	last = malloc(sizeof(t_list));
	last->content = "Estoy al final";
	last->next = NULL;
	ft_lstadd_back(&lista, last);
	while (lista)
	{
		printf("%s ", lista->content);
		lista = lista->next;
	}
	return (0);
}
*/
