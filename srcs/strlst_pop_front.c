/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_pop_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 00:42:59 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Remove a node at the begin (front) from an string list, and set
//				it's next and prev values to NULL.
//
// Arguments: 'lst' is a pointer to a string list.
//
// Return value: Return a pointer to the removed node if success, otherwise
//				return NULL (if 'lst' is NULL or empty).

t_strnode	*strlst_pop_front(t_strlist *lst)
{
	t_strnode	*node;

	if (lst == NULL || lst->size == 0)
		return (NULL);
	node = lst->front;
	lst->front = node->next;
	if (node->next)
		node->next->prev = NULL;
	else
		lst->back = NULL;
	node->next = NULL;
	node->prev = NULL;
	lst->size -= 1;
	return (node);
}
