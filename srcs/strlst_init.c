/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:00:32 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/01 19:04:17 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlist.h"

// Description: Initialize a list of strings (t_strlist) with null
// 				pointers and size value as zero.
//
// Arguments: 'lst' is a pointer to the string list to be initialized.
//
// Return value: 1 if 'lst' is NULL, 0 if success.

int	strlst_init(t_strlist *lst)
{
	if (lst == NULL)
		return (1);
	lst->front = NULL;
	lst->back = NULL;
	lst->size = 0;
	return (0);
}
