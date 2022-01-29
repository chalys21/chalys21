# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chalys <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 20:56:03 by chalys            #+#    #+#              #
#    Updated: 2021/12/11 18:34:21 by chalys           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c ft_isalnum.c ft_isdigit.c ft_itoa.c ft_memcmp.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c ft_strlcpy.c\
		ft_strncmp.c ft_strnstr.c ft_substr.c ft_bzero.c ft_isalpha.c\
		ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_split.c ft_striteri.c\
		ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_calloc.c\
		ft_isascii.c ft_memchr.c ft_memmove.c ft_memset.c ft_putnbr_fd.c\
		ft_strchr.c ft_strlcat.c ft_strmapi.c ft_strtrim.c ft_toupper.c\

OBJS = $(SRCS:.c=.o)

CC			= gcc
RM			= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
				ar	rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean: 	clean
				$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re
