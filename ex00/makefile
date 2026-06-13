# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: puzzlesanalytik <puzzlesanalytik@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/13 12:56:22 by puzzlesanal       #+#    #+#              #
#    Updated: 2026/06/13 12:59:25 by puzzlesanal      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ex00/Makefile

NAME     := convert
CXX      := c++
# Du kannst hier auf c++17 umschalten:  make STD=c++17
STD      ?= c++98
CXXFLAGS := -Wall -Wextra -Werror -std=$(STD)

SRC := main.cpp convert.cpp
OBJ := $(SRC:.cpp=.o)

# Farben
GRN := \033[32m
YEL := \033[33m
RED := \033[31m
BLU := \033[34m
RST := \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BLU)[Link]$(RST) $@"
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "$(GRN)[OK]$(RST) Build complete → ./$(NAME)"

%.o: %.cpp convert.hpp
	@echo "$(YEL)[Compile]$(RST) $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(RED)[Clean]$(RST) object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)[Clean]$(RST) binary removed"

re: fclean all

.PHONY: all clean fclean re