# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 16:59:07 by maricard          #+#    #+#              #
#    Updated: 2022/11/17 15:22:53 by maricard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c
ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c
ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC-OBJ = $(SRC:.C=.O)

BONUS = 

BONUS-OBJ = $(BONUS:.C=.O)


all:		$(NAME)
		
$(NAME):	$(OBJ)		
			
			clang -Wall -Werror -Wextra
			
			ar rcs $(NAME) $(SRC-OBJ)

clean:	
			$(RM) $(SRC-OBJ) $(BONUS-OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean
			$(NAME)
