# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstrawbe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 21:07:03 by rstrawbe          #+#    #+#              #
#    Updated: 2020/06/04 17:26:08 by rstrawbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBH = libft.h

LIBSO = libft.so

FLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

SRC_B = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
	ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ = $(SRC:%.c=%.o)

OBJ_B = $(SRC_B:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(LIBH)
	gcc $(FLAGS) -c $< -o $@

bonus: $(OBJ_B)
	ar rc $(NAME) $(OBJ_B)
	ranlib $(NAME)

so:
	gcc -c -fPIC $(SRC) $(SRC_B)
	gcc -shared -o $(LIBSO) $(OBJ) $(OBJ_B)

clean:
	/bin/rm -f $(OBJ) $(OBJ_B)

fclean: clean
	/bin/rm -f $(NAME) $(LIBSO)

re: fclean all
.PHONY: all clean fclean re bonus so
