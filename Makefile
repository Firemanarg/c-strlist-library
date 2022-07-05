# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 17:44:45 by lsilva-q          #+#    #+#              #
#    Updated: 2022/07/05 13:19:05 by lsilva-q         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= strlist.a

CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
AR				= ar rcs

SRCS_DIR		= srcs
OBJS_DIR		= objs

SRC_FILES		= strlst_init.c		strnode_new.c		strlst_getindex.c	\
				strlst_push_back.c	strlst_push_front.c	strlst_push.c		\
				strlst_pop.c		strlst_pop_node.c	strlst_getnode.c	\
				strlst_print.c		strlst_pop.c		strlst_pop_front.c	\
				strlst_pop_back.c	strnode_free.c		strlst_clear.c		\
				strlst_swap_node.c

SRCS			= $(addprefix $(SRCS_DIR)/, $(SRC_FILES))
OBJS			= $(addprefix $(OBJS_DIR)/, $(SRC_FILES:%.c=%.o))

HEADER			= strlist.h

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER)
				mkdir -p $(OBJS_DIR)
				$(CC) $(CFLAGS) -I ./ -c $< -o $@

clean:
				$(RM) $(OBJS)
				$(RM) -rf $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
