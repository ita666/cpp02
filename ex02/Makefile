# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yanthoma <yanthoma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 15:45:58 by yanthoma          #+#    #+#              #
#    Updated: 2023/05/18 14:43:02 by yanthoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# /* ~~~~~~ SOURCES ~~~~~~ */
SRCS	= main.cpp Fixed.cpp\

SRCDIR		= srcs/
OBJDIR 		= objs
OBJS		= ${addprefix ${OBJDIR}/, ${SRCS:.cpp=.o}}
INC			= inc/
CINC		= -I ./inc/

# /* ~~~~~~~ COMPILING INFO ~~~~~~~ */

CC		= c++
CFLAGS	= -g -Wall -Wextra -Werror -std=c++98
NAME	= ex02	
RM		= rm -rf

all:		${NAME}

${OBJDIR}/%.o : ${SRCDIR}%.cpp ${INC}
				mkdir -p ${OBJDIR}
				${CC} ${CFLAGS} ${CINC} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}${OBJDIR}

fclean:		
			${RM} ${OBJS} ${OBJDIR}
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re

