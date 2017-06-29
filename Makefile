# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhakonze <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 10:52:05 by zhakonze          #+#    #+#              #
#    Updated: 2017/06/21 12:33:21 by zhakonze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Werror -Wall -Wextra

SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_tolower.c ft_toupper.c ft_strlen.c ft_strcmp.c \
	   ft_strncmp.c ft_memcmp.c ft_strequ.c ft_strnequ.c ft_memset.c \
       ft_memalloc.c ft_memdel.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
	   ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	   ft_memcpy.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memmove.c \
       ft_strclr.c ft_striter.c ft_striteri.c ft_strcat.c ft_strjoin.c \
       ft_strmap.c ft_strmapi.c ft_strcpy.c ft_strnew.c ft_strdup.c \
       ft_strncat.c ft_strncpy.c ft_strnstr.c ft_strstr.c ft_strchr.c \
	   ft_strrchr.c ft_strsplit.c ft_itoa.c ft_strtrim.c ft_strsub.c \
       ft_strlcat.c ft_strdel.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS)
	ar rc  $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
