# Static library name
NAME		= harlFilter

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -g -std=c++98

# Directories and files
SRC			= main.cpp source/Harl.cpp
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
