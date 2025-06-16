SOURCE := Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

NAME := braiiiiiiinnnzzzz

all: $(NAME)

$(NAME): $(SOURCE)
	c++ -Wall -Wextra -Werror -std=c++98 $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
