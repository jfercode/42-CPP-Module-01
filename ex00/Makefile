# Static library name
NAME		= ex00

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Directories and files
SRC			= source/Zombie.cpp source/newZombie.cpp source/randomChump.cpp main.cpp
OBJ			= $(SRC:.cpp=.o)

all:	$(NAME)
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re