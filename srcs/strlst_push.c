/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 13:37:21 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Insert a node at an specified position (index)
//				of an string list.
//
// Arguments: 'lst' is a pointer to a string list. 'node' is a pointer to
//			  an string node. 'index' is the desired position to insert node.
//
// Return value: Return a pointer to the inserted node, or NULL
//				if 'lst' or 'node' value is NULL.

t_strnode	*strlst_push(t_strlist *lst, t_strnode *node, int index)
{
	t_strnode	*tmp;
	t_strnode	*out;

	out = NULL;
	if (lst == NULL || node == NULL || index < 0 || index > lst->size)
		return (NULL);
	if (index == 0 || lst->size == 0)
		out = strlst_push_front(lst, node);
	else if (index == lst->size)
		out = strlst_push_back(lst, node);
	else
	{
		tmp = strlst_getnode(lst, index);
		if (tmp == NULL)
			return (NULL);
		node->next = tmp;
		node->prev = tmp->prev;
		tmp->prev->next = node;
		tmp->prev = node;
		lst->size += 1;
		return (node);
	}
	return (out);
}
