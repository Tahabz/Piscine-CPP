FLAGS = -Wall -Wextra -Werror -std=c++98
DFLAGS = -fsanitize=address -g
NAME = megaphone
INCLUDE = ../../
SRCS = megaphone.cpp \
		$(INCLUDE)/myString.cpp

all: $(NAME)

$(NAME): $(SRCS)
		c++ $(FLAGS) $(SRCS) -I $(INCLUDE) -o $(NAME)

clean:
		rm $(NAME)
fclean: clean

re: fclean all