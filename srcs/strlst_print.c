/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:25:57 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 00:40:18 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Print a string (fd 1) list following this format
//				filled -> [string1, string2, ..., string_n]
//				empty -> []
//
// Arguments: 'lst' is a pointer to a string list.
//
// Return value: Void function.

static size_t	strlen(char *str);

void	strlst_print(t_strlist *lst)
{
	t_strnode	*node;

	node = lst->front;
	write(1, "[", 1);
	while (node)
	{
		write(1, node->content, strlen(node->content));
		node = node->next;
		if (node != NULL)
			write(1, ", ", 2);
	}
	write(1, "]", 1);
}

static size_t	strlen(char *str)
{
	size_t	len;
	char	*tmp;

	if (str == NULL)
		return (0);
	len = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		len += 1;
		tmp++;
	}
	return (len);
}
