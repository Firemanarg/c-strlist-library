/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnode_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:49:49 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 14:09:32 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Free a node.
//
// Arguments: 'node' is the target node to be freed.
//
// Return value: Void function.

void	strnode_free(t_strnode *node)
{
	if (node != NULL)
	{
		node->content = NULL;
		free(node);
	}
}
