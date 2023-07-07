# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 19:55:45 by pepe              #+#    #+#              #
#    Updated: 2023/07/06 23:48:59 by pepe             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = 						\
		srcs/megaphone.cpp	\

INC =						\

OBJS = $(SRCS:%.cpp=objs/%.o)

CXX = c++

CXXFLAGS =	-Wall -Wextra -Werror
CXXFLAGS +=	-std=c++98
CXXFLAGS +=	-I inc

$(NAME): objs $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

objs:
	@mkdir -p	objs/srcs

objs/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
