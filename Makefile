CC = cc 
CFLAGS = -Wall -Wextra -Werror 
SRC = \
	ft_printf.c ft_function.c ft_uitoa.c ft_fct_hexa.c ft_ulitoa16.c libft/ft_itoa.c libft/ft_strlen.c

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all : $(NAME)
	
$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ) 
	
%.o : %.c	
	$(CC) $(CFLAGS) -c $^ -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re 


