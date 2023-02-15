# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 10:27:04 by kle-guen          #+#    #+#              #
#    Updated: 2023/02/15 13:47:35 by kle-guen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CC = @c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp \
	   Animal.cpp \
	   WrongAnimal.cpp \
	   Dog.cpp \
	   Cat.cpp \
	   WrongCat.cpp \
	   Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp 
	$(CC) $(CPPFLAGS) -c $< -o $(NAME)

all : $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32m\033[0;33m Compiling...\033[0m"
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME) 
	@echo "\033[0;32m\033[0;32m Done\033[0m"
	@tput blink; echo " 🎉🎉🎉🎉"; tput sgr0

clean:
	@echo "\033[0;32m\033[0;33m Cleaning..\033[0m"
	@rm -rf $(OBJS)
	@echo "\033[0;32m\033[0;32m Done\033[0m"

fclean: clean
	@rm -rf $(NAME)

re: fclean all 

.SILENT: 
.PHONY: re all clean fclean
