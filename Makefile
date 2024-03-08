# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 15:26:06 by klamprak          #+#    #+#              #
#    Updated: 2024/03/07 16:31:08 by klamprak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

B_SRCS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c

OBJS = ${SRCS:.c=.o}

B_OBJS = ${B_SRCS:.c=.o}

NAME = libft.a

HEADER = libft.h

$(OBJS): %.o: %.c $(HEADER)
	cc $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: $(NAME)

bonus:	${B_OBJS} $(OBJS)
	ar rcs ${NAME} ${B_OBJS} $(OBJS)

clean:
	rm -f ${OBJS} ${B_OBJS}

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
