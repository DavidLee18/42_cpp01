SOURCE := Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

NAME := unnecessary_violence

all: $(NAME)

$(NAME): $(SOURCE)
	c++ -Wall -Wextra -Werror -std=c++98 $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
