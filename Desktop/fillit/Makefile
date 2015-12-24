NAME = fillit 

CFLAGS = -Wall -Wextra -Werror

SRCS = fillit.c\
	   ft_check_file.c\
	   ft_lst.c\
	   ft_read_file.c\
	   matrix.c\
	   resolve.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I fillit.h
	ar r $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re
