# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 01:20:13 by sben-tay          #+#    #+#              #
#    Updated: 2023/09/11 01:40:26 by sben-tay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS			=	ft_isalnum.c ft_isprint.c ft_isalpha.c \
					ft_strncmp.c ft_atoi.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_strlen.c \
					ft_toupper.c ft_isdigit.c 
OBJS			= $(SRCS:.c=.o)

# BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# 					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# 					ft_lstmap.c ft_lstnew.c ft_lstsize.c
# BONUS_OBJS		= $(BONUS:.c=.o)

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)
				ranlib ${NAME}

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus