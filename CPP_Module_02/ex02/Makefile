# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 19:55:45 by pepe              #+#    #+#              #
#    Updated: 2023/07/18 16:38:04 by psegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = operators

SRCS = 							\
		srcs/main.cpp			\
		srcs/Fixed.cpp			\

OBJS = $(SRCS:%.cpp=objs/%.o)
DEPS = $(OBJS:%.o=%.d)

CXX = c++

CXXFLAGS =	-Wall -Wextra -Werror # -g3 -fsanitize=address
CXXFLAGS +=	-std=c++98
CXXFLAGS +=	-I inc
CPPFLAGS = -MMD

$(NAME): objs $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

objs:
	@mkdir -p	objs/srcs

objs/%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
