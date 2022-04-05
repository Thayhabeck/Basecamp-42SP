# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 16:53:44 by thabeck-          #+#    #+#              #
#    Updated: 2022/04/03 19:21:32 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/main.c
OBJS	= ${SRCS:.c=.o}
HDRS	= includes/
NAME	= ft_display_file
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o:
				${CC} ${CFLAGS} -c $< -I ${HDRS} -o ${<:.c=.o} 
			
all:		${NAME}

${NAME}:	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}
				
.PHONY: all clean fclean
