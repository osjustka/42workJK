hello:
	echo "Hello, World"
Your Makefile must at least contain the rules	
$(NAME), all, clean, fclean, re

To turn in bonuses to your project, you must include a rule bonus to your Makefile,

NAME = libft

SRC = source.c \

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

