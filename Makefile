# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dridolfo <dridolfo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:49:51 by dridolfo          #+#    #+#              #
#    Updated: 2022/01/17 12:44:37 by dridolfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./libft.a

SRC = ./ft_atoi.c \
./ft_bzero.c \
./ft_calloc.c \
./ft_isalnum.c \
./ft_isalpha.c \
./ft_isascii.c \
./ft_isdigit.c \
./ft_isprint.c \
./ft_itoa.c	\
./ft_memchr.c \
./ft_memcmp.c \
./ft_memcpy.c \
./ft_memmove.c \
./ft_memset.c \
./ft_putchar_fd.c \
./ft_putendl_fd.c \
./ft_putnbr_fd.c \
./ft_putstr_fd.c \
./ft_split.c \
./ft_strchr.c \
./ft_strdup.c \
./ft_striteri.c \
./ft_strjoin.c \
./ft_strlcat.c \
./ft_strlcpy.c \
./ft_strlen.c \
./ft_strmapi.c \
./ft_strncmp.c \
./ft_strnstr.c \
./ft_strrchr.c \
./ft_strtrim.c \
./ft_substr.c \
./ft_tolower.c \
./ft_toupper.c \

BONUS = ./ft_lstadd_back.c \
./ft_lstadd_front.c \
./ft_lstclear.c \
./ft_lstdelone.c \
./ft_lstiter.c \
./ft_lstlast.c \
./ft_lstmap.c \
./ft_lstnew.c \
./ft_lstsize.c


OBJS = $(SRC:.c=.o)

OBJB = $(BONUS:.c=.o)

HDRS = libft.h

RM = rm -f

CC = gcc -Wall -Wextra -Werror

.c.o = ${CC} -I ${HDRS} includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: ${NAME} ${OBJB}
	ar rc $(NAME) $(OBJB)

all: $(NAME)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME) ${OBJB}

re: fclean all

.PHONY: all clean fclean re
