# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aputman <aputman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 01:12:15 by aputman           #+#    #+#              #
#    Updated: 2021/03/30 12:00:47 by aputman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CFLAGS = -std=c99
WFLAGS = -Wall -Wextra -Werror

INCL_DIR = ./
SRCS_DIR = ./

INCL = libft.h
SRCS = ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_islower.c\
		ft_isprint.c\
		ft_isspace.c\
		ft_isupper.c\
		ft_itoa.c\
		ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstlast.c\
		ft_lstmap.c\
		ft_lstnew.c\
		ft_lstsize.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memrchr.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)

%.o:%.c $(INCL)
	@$(CC) $(WFLAGS) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
