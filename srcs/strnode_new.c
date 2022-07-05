/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnode_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/06/26 19:49:52 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Allocate a new string node (t_strnode) with null
// 				pointers and argument content.
//
// Arguments: 'content' is a pointer to a char array.
//
// Return value: NULL if allocation fails, otherwise return a pointer
// 				 to the allocated node.

t_strnode	*strnode_new(char *content)
{
	t_strnode	*node;

	node = malloc(sizeof(t_strnode));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->prev = NULL;
	node->content = content;
	return (node);
}
