/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:06:38 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/03/28 22:10:57 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;	

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*lista;
	t_list	*elem1;
	int	i;

	lista = malloc(sizeof(t_list));
	elem1 = malloc(sizeof(t_list));
	lista->content = "Hola";
	elem1->content = "Mundo";
	lista->next = elem1;
	elem1->next = NULL;
	i = ft_lstsize(lista);
	printf("%i\n",i);
	return (0);
}
*/
