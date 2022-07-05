/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_getindex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/04 03:01:03 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Return the index of a node in a string list.
//
// Arguments: 'lst' is a pointer to a string list. 'node' is a pointer to
//			  an string node.
//
// Return value: -1 if 'lst' or 'node' value is NULL, or if node does'nt belong
//				to 'lst'. If success, return the index of the node.

int	strlst_getindex(t_strlist *lst, t_strnode *node)
{
	t_strnode	*tmp;
	int			index;

	index = 0;
	tmp = lst->front;
	while (tmp)
	{
		if (tmp == node)
			return (index);
		index += 1;
		tmp = node->next;
	}
	return (-1);
}
