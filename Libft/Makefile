# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adono-ma <adono-ma@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 19:02:00 by adono-ma          #+#    #+#              #
#    Updated: 2024/01/26 16:29:37 by adono-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar -rc #flags, check them out

SRC = ft_isalnum.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_atoi.c\
		ft_bzero.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strdup.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_substr.c\

OBJ = $(SRC:%.c=%.o) #Check the objects that go from C to binary. Compilation

RM = rm -f 

#to call the macros $(NOMBRE)

# MAKEFILE RECIPE #

# results (what do I want to obtain) :   what do I need
#		+ tab   Instructions

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@
# $< first prerequirement to create my output (in this case SRC)
# $@ -> target. is the same as to put 
# $(OBJ): $(SRC)

clean:
	$(RM) $(OBJ) 
#it might work with %.o, check it out

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

# Phony tells the makefile to take YOUR rules, not the defaut ones 
.PHONY: clean fclean re all