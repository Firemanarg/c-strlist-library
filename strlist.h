/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 17:45:04 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/07/05 13:22:55 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLIST_H
# define STRLIST_H

# include <stdlib.h>
# include <unistd.h>

// Node Struct (Secondary Struct)
typedef struct s_strnode
{
	struct s_strnode	*next;
	struct s_strnode	*prev;
	char				*content;
}	t_strnode;

// List Struct (Primary Struct)
typedef struct s_strlist
{
	struct s_strnode	*front;
	struct s_strnode	*back;
	int					size;
}	t_strlist;

void		strlst_clear(t_strlist *lst);
int			strlst_getindex(t_strlist *lst, t_strnode *node);
t_strnode	*strlst_getnode(t_strlist *lst, int index);
int			strlst_init(t_strlist *lst);
t_strnode	*strlst_pop_back(t_strlist *lst);
t_strnode	*strlst_pop_front(t_strlist *lst);
t_strnode	*strlst_pop_node(t_strlist *lst, t_strnode *node);
t_strnode	*strlst_pop(t_strlist *lst, int index);
void		strlst_print(t_strlist *lst);
t_strnode	*strlst_push_back(t_strlist *lst, t_strnode *node);
t_strnode	*strlst_push_front(t_strlist *lst, t_strnode *node);
t_strnode	*strlst_push(t_strlist *lst, t_strnode *node, int index);
int			strlst_swap_node(t_strlist *lst, int index1, int index2);
void		strnode_free(t_strnode *node);
t_strnode	*strnode_new(char *content);

#endif