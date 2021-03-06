# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwragg <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 21:06:17 by mwragg            #+#    #+#              #
#    Updated: 2019/07/09 21:17:00 by mwragg           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRC=	./ft_putchar.c \
		./ft_putstr.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_putendl.c \
		./ft_putchar_fd.c \
		./ft_strcpy.c \
		./ft_strncpy.c \
		./ft_strdup.c \
		./ft_strlen.c \
		./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isalnum.c \
		./ft_isascii.c \
		./ft_isprint.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_strcmp.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strstr.c \
		./ft_strnstr.c \
		./ft_strcat.c \
		./ft_strncat.c \
		./ft_strlcat.c \
		./ft_strncmp.c \
		./ft_atoi.c \
		./ft_putnbr.c \
		./ft_putnbr_fd.c \
		./ft_memset.c \
		./ft_bzero.c \
		./ft_memcpy.c \
		./ft_memncpy.c \
		./ft_memccpy.c \
		./ft_memmove.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_memalloc.c \
		./ft_memdel.c \
		./ft_strdel.c \
		./ft_strclr.c \
		./ft_strnew.c \
		./ft_strequ.c \
		./ft_strnequ.c \
		./ft_strsub.c \
		./ft_strjoin.c \
		./ft_strtrim.c \
		./ft_striter.c \
		./ft_striteri.c \
		./ft_strmap.c \
		./ft_strmapi.c \
		./ft_itoa.c \
		./ft_strsplit.c \
		./ft_strsubtab.c \
		./ft_strncpytab.c \
		./ft_count_words.c \
		./ft_sort.c \
		./ft_swap.c \
		./ft_lstnew.c \
		./ft_lstdelone.c \
		./ft_lstdel.c \
		./ft_lstadd.c \
		./ft_lstiter.c \
		./ft_lstmap.c \
		./ft_strjoin_free.c \
		./ft_strnjoin_free.c\
		./ft_strichr.c \
		./get_next_line.c \
		./ft_strexit.c

OBJ= $(SRC:.c=.o)

INCLUDES= -I.

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
