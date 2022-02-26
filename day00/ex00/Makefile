FLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -fsanitize=address -g
SRCS = megaphone.cpp myString.cpp
NAME = megaphone

all: $(NAME)

$(NAME): $(SRCS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
		rm $(NAME)
fclean: clean

re: fclean all