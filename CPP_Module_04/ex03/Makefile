# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psegura- <psegura-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 19:55:45 by pepe              #+#    #+#              #
#    Updated: 2023/07/23 16:09:05 by psegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract

SRCS = 							\
		srcs/main.cpp			\
		srcs/AMateria.cpp		\
		srcs/Character.cpp		\
		srcs/ICharacter.cpp		\
		srcs/IMateriaSource.cpp	\
		srcs/Ice.cpp			\
		srcs/Cure.cpp			\



OBJS = $(SRCS:%.cpp=objs/%.o)
DEPS = $(OBJS:%.o=%.d)

CXX = c++

CXXFLAGS =	-Wall -Wextra -Werror -Wshadow  -g3 -fsanitize=address,leak
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

-include $(DEPS)

.PHONY: all clean fclean re

re:: fclean
re:: all
