# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 11:05:58 by ogorfti           #+#    #+#              #
#    Updated: 2023/10/28 12:08:36 by ogorfti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRCS = $(wildcard *.cpp)

OBJ_DIR = ../obj

OBJS_PATH = ../obj/ex01

OBJS = $(addprefix $(OBJS_PATH)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = a.out

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mDONE!\033[0m"

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(OBJ_DIR) $(NAME)

re: fclean all