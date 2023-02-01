# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkabelko <jkabelko@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 09:27:24 by jkabelko          #+#    #+#              #
#    Updated: 2023/01/18 09:27:27 by jkabelko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c

BONUS		=	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c
			
MAIN_PART	:=	$(filter-out $(BONUS), $(SRC))
OBJS		:=	$(SRC:.c=.o)
MAIN_PART_OBJS	:=	$(MAIN_PART:.c=.o)
NAME		:=	libft.a
LINK		:=	ar rcs
RM		:= 	rm -rf

$(NAME):	$(MAIN_PART_OBJS)
		$(LINK) $(NAME) $(MAIN_PART_OBJS)

all: 		$(NAME)

bonus:		$(OBJS)
		$(LINK) $(NAME) $(OBJS)

# ******TAKE OUT******* #
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
# ******TAKE OUT******* #

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		clean fclean all

.PHONY:		all clean fclean re bonus so
