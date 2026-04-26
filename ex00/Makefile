CXX=c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = cast
SRC_DIR = ./
SRCS = $(SRC_DIR)main.cpp \
	   $(SRC_DIR)ScalarConverter.cpp \
	   $(SRC_DIR)checkers.cpp \

OBJ_DIR = .build/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
