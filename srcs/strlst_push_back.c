/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 13:28:02 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Insert a node at the end (back) of an string list.
//
// Arguments: 'lst' is a pointer to a string list. 'node' is a pointer to
//			  an string node.
//
// Return value: Return a pointer to the inserted node, or NULL
//				if 'lst' or 'node' value is NULL.

t_strnode	*strlst_push_back(t_strlist *lst, t_strnode *node)
{
	if (lst == NULL || node == NULL)
		return (NULL);
	if (lst->size == 0)
	{
		node->prev = NULL;
		node->next = NULL;
		lst->front = node;
		lst->back = node;
	}
	else
	{
		node->prev = lst->back;
		node->next = NULL;
		lst->back->next = node;
		lst->back = node;
	}
	lst->size += 1;
	return (node);
}
