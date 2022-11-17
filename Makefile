# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 16:59:07 by maricard          #+#    #+#              #
#    Updated: 2022/11/17 17:22:40 by maricard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

CC = clang

CCFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memmove.c  \
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c  \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c  \
ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strtrim.c \
ft_substr.c ft_tolower.c ft_toupper.c

SRC-OBJ = $(SRC:.c=.o)

BONUS = 

BONUS-OBJ = $(BONUS:.c=.o)

.c.o:		$(SRC)
			$(CC) -c $(CCFLAGS) $(SRC)

all:		$(NAME)
		
$(NAME):	$(SRC-OBJ)	
			ar rcs $(NAME) $(SRC-OBJ)

bonus:		$(NAME) $(BONUS-OBJ)
			ar rs $(NAME) $(BONUS-OBJ)
			touch bonus

clean:
			$(RM) $(SRC-OBJ) $(BONUS-OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean
			$(NAME)
