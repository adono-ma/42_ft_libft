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

SRC = ft_isalnum.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_split.c \
		ft_itoa.c \

BONUS = ft_lstnew_bonus.c \
		

OBJ = $(SRC:%.c=%.o) #Check the objects that go from C to binary. Compilation

OBJ_BONUS = $(BONUS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm
RMFLAGS = -f

AR = ar r#flags, check them out

NAME = libft.a

#to call the macros $(NOMBRE)

# MAKEFILE RECIPE #

# results (what do I want to obtain) :   what do I need
#		+ tab   Instructions

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) ${OBJ}

#$(OBJ): $(SRC)
#	$(CC) $(CFLAGS) -c $< -o $@
# $< first prerequirement to create my output (in this case SRC)
# $@ -> target. is the same as to put 
# $(OBJ): $(SRC)

bonus: $(OBJ_BONUS) $(NAME)
	$(AR) $(NAME) $(OBJ_BONUS)

clean:
	$(RM) $(RMFLAGS) $(OBJ) $(OBJ_BONUS)
#it might work with %.o, check it out

fclean:	clean
	$(RM) $(RMFLAGS) $(NAME) $(OBJ) $(OBJ_BONUS)

re: fclean all

# Phony tells the makefile to take YOUR rules, not the defaut ones 
.PHONY: all clean fclean re
