# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamazzal <mamazzal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 08:12:13 by mamazzal          #+#    #+#              #
#    Updated: 2022/10/15 08:12:14 by mamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

INC				= libft.h

CFLAGS	= -Wall -Werror -Wextra -c

CC		= gcc

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_strlcat.c ft_striteri.c

OBJS			=	ft_isalnum.o ft_isprint.o ft_memcmp.o  ft_putchar_fd.o ft_split.o \
					ft_strlcat.o ft_strncmp.o ft_substr.o ft_atoi.o ft_isalpha.o \
					ft_itoa.o ft_memcpy.o  ft_putendl_fd.o ft_strchr.o  ft_strlcpy.o \
					ft_strnstr.o ft_tolower.o ft_bzero.o   ft_isascii.o \
					ft_memmove.o ft_putnbr_fd.o  ft_strdup.o  ft_strlen.o  ft_strrchr.o \
					ft_toupper.o ft_calloc.o  ft_isdigit.o ft_memchr.o  ft_memset.o  \
					ft_putstr_fd.o  ft_strjoin.o ft_strmapi.o ft_strtrim.o ft_strlcat.o ft_striteri.o

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	ar -r $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -I $(INC) $<
clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re: fclean all
