# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 04:09:14 by sben-tay          #+#    #+#              #
#    Updated: 2023/11/18 13:52:20 by sben-tay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS			=	ft_isalnum.c  ft_isprint.c  ft_isalpha.c  ft_memmove.c  ft_memcmp.c \
					ft_strncmp.c  ft_atoi.c  ft_memchr.c  ft_strchr.c  ft_strrchr.c \
					ft_tolower.c  ft_bzero.c  ft_isascii.c  ft_strnstr.c  ft_strlcpy.c \
					ft_strlen.c ft_memset.c  ft_strlcat.c  ft_strdup.c  ft_calloc.c  ft_split.c \
					ft_toupper.c ft_isdigit.c ft_memcpy.c  ft_substr.c  ft_strjoin.c  ft_strtrim.c \
					ft_striteri.c  ft_putchar_fd.c  ft_strmapi.c  ft_itoa.c  ft_putstr_fd.c  ft_putnbr_fd.c \
					ft_putendl_fd.c \
					
					
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
					ft_lstiter.c ft_lstlast.c ft_lstadd_back.c  \
					ft_lstmap.c ft_lstdelone.c ft_lstclear.c
BONUS_OBJS		= $(BONUS:.c=.o)

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

CC				= cc
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