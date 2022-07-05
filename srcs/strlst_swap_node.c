/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_swap_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:00:12 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 13:18:55 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Swap two nodes, specified by index.
//
// Arguments: 'lst' is a pointer to a string list. 'index1' and 'index2'
//				are the desired positions of nodes to be swapped.
//
// Return value: 1 if 'lst' is NULL or any of indexes is invalid.
//				Return 0 if success.

static void	check_update_lst_front_back(t_strlist *lst, t_strnode *node);
static void	swap_nodes(t_strnode *node1, t_strnode *node2);

int	strlst_swap_node(t_strlist *lst, int index1, int index2)
{
	t_strnode	*node1;
	t_strnode	*node2;

	if (lst == NULL || lst->size == 0)
		return (1);
	if (index1 < 0 || index1 >= lst->size
		|| index2 < 0 || index2 >= lst->size)
		return (1);
	if (index1 == index2)
		return (0);
	node1 = strlst_getnode(lst, index1);
	node2 = strlst_getnode(lst, index2);
	check_update_lst_front_back(lst, node1);
	check_update_lst_front_back(lst, node2);
	swap_nodes(node1, node2);
	return (0);
}

static void	check_update_lst_front_back(t_strlist *lst, t_strnode *node)
{
	if (lst->front == node)
		lst->front = node;
	if (lst->back == node)
		lst->back = node;
}

static void	swap_nodes(t_strnode *node1, t_strnode *node2)
{
	t_strnode	tmp;

	tmp.next = node1->next;
	tmp.prev = node1->prev;
	if (node1->prev)
		node1->prev->next = node2;
	if (node1->next)
		node1->next->prev = node2;
	node1->next = node2->next;
	node1->prev = node2->prev;
	if (node2->prev)
		node2->prev->next = node1;
	if (node2->next)
		node2->next->prev = node1;
	node2->next = tmp.next;
	node2->prev = tmp.prev;
	tmp.next = NULL;
	tmp.prev = NULL;
}
