FLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -fsanitize=address -g
NAME = fixed
SRCS = 	main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(SRCS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
		rm $(NAME)
fclean: clean

re: fclean all