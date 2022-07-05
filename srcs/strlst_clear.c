/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:55:19 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 01:27:25 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Clear an string list, freeing all nodes and their content.
//
// Arguments: 'lst' is the target string list to be cleaned.
//
// Return value: Void function.

void	strlst_clear(t_strlist *lst)
{
	t_strnode	*node;
	t_strnode	*tmp;

	node = lst->front;
	while (node != NULL)
	{
		tmp = node->next;
		strnode_free(node);
		node = tmp;
	}
	lst->front = NULL;
	lst->back = NULL;
}
