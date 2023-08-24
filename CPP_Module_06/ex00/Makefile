# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 19:55:45 by pepe              #+#    #+#              #
#    Updated: 2023/08/24 12:40:03 by psegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRCS = 							\
		srcs/main.cpp			\
		srcs/DataTypes.cpp		\
		srcs/parser.cpp			\


OBJS = $(SRCS:%.cpp=objs/%.o)
DEPS = $(OBJS:%.o=%.d)

CXX = c++

CXXFLAGS =	-Wall -Wextra -Werror -Wshadow
CXXFLAGS +=	-std=c++98
CXXFLAGS +=	-I inc
CPPFLAGS = -MMD

$(NAME): objs $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

objs:
	@mkdir -p	objs/srcs

objs/%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

debug:: CXXFLAGS += -D DEBUG -g3 -fsanitize=address#,leak
debug:: re

all: $(NAME)

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)

re:: fclean
re:: all

-include $(DEPS)

.PHONY: all clean fclean re