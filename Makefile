# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmouradi <kmouradi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 10:17:35 by kmouradi          #+#    #+#              #
#    Updated: 2022/11/03 13:57:08 by kmouradi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=cc
CL=ar -rc
CN=rm -rf
FLAGS=-Wall -Wextra -Werror
SRC= ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha\
ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp\
ft_memcpy ft_memset ft_putchar_fd ft_putstr_fd ft_strrchr ft_strchr\
ft_strdup ft_strlcat ft_strlen ft_strncmp ft_strnstr\
ft_substr ft_tolower ft_toupper ft_memmove ft_putnbr_fd\
ft_itoa ft_strjoin ft_strmapi ft_putendl_fd ft_striteri \

OBJ=${SRC:=.o}

NAME=libft.a

.o: .c libft.h
	${CC} ${FLAGS} -c $< 
	
all:${NAME}

${NAME}:${OBJ}
	${CL} ${NAME} ${OBJ}

clean:
	${CN} ${OBJ}

fclean: clean
	${CN} ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re
