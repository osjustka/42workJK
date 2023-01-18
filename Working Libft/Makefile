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

NAME = libft.a

SRCS	=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmpc.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c 

BONUS	=	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

OBJS	= $(SRCS:.c=.o)
BONUS_OBJS 	= $(BONUS:.c=.o)

LINK = ar rc
#r means that if the library already exists, replace the old files within the library with
# your new files. c means create the library if it did not exist.

all:		$(NAME)

$(NAME):	$(OBJS)
		$(LINK) $(NAME) $(OBJS)

bonus:		$(OBJS) $(BONUS_OBJS)
		$(LINK) $(NAME) $(OBJS) $(BONUS_OBJS)
		
clean:
		rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re bonus
#explicitly declaration of the target to be phony - making it a prerequisite of the special target
