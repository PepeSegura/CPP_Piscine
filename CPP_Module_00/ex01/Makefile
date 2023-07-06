# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pepe <pepe@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 19:55:45 by pepe              #+#    #+#              #
#    Updated: 2023/07/06 20:37:00 by pepe             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = 						\
		srcs/main.cpp		\

INC =						\
		inc/Contact.cpp		\
		inc/PhoneBook.cpp	\

OBJS = $(SRCS:%.cpp=objs/%.o)

CXX = g++

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
