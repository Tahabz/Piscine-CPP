FLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -fsanitize=address -g
NAME = zombie
SRCS = Zombie.cpp \
		main.cpp \
		zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRCS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
		rm $(NAME)
fclean: clean

re: fclean all