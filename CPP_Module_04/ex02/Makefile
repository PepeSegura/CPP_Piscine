# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 19:55:45 by pepe              #+#    #+#              #
#    Updated: 2023/08/07 14:57:19 by psegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract

SRCS = 							\
		srcs/main.cpp			\
		srcs/Brain.cpp			\
		srcs/AAnimal.cpp			\
		srcs/Dog.cpp			\
		srcs/Cat.cpp			\


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

debug:: CXXFLAGS += -D DEBUG -g3 -fsanitize=address,leak
debug:: re

all: $(NAME)

clean:
	@rm -rf objs

fclean: clean
	@rm -f $(NAME)

-include $(DEPS)

.PHONY: all clean fclean re

re:: fclean
re:: all
