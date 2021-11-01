# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mli <mli@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 17:22:00 by mli               #+#    #+#              #
#    Updated: 2021/11/01 11:17:13 by mli              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EOC = \033[0m
BOLD = \033[1m
GREEN = \033[32m
YELLOW = \033[33m

# ############################################################################ #

NAME = libft.a

INCL_PATH = includes/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ${INCL_PATH}

LIBFT_PATH = srcs/
LIBFT_SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_toupper.c ft_tolower.c \
			 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
			 ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			 ft_isspace.c ft_atoi_bool.c ft_atoi_check.c ft_atoi_checkptr.c \
			 ft_atoi_boolptr.c \
			 ft_isascii.c ft_isprint.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			 ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
			 ft_strtrim.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c \
			 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			 ft_putchar.c ft_putstr.c ft_putnbr.c \
			 ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
			 ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			 ft_strcmp.c ft_memalloc.c ft_free.c ft_atoi_ptr.c ft_nbrlen.c \
			 ft_abs.c ft_itoa_lbase.c

SRCS_FILES = ${addprefix ${LIBFT_PATH}, ${LIBFT_SRCS}}

OBJS_PATH = .obj/
OBJS = ${addprefix ${OBJS_PATH}, ${LIBFT_SRCS:.c=.o}}

all:
	@printf "${BOLD}Make libft${EOC} : "
	@make ${NAME}

$(NAME): ${OBJS_PATH} ${OBJS}
	@echo ""
	@ar rcs ${NAME} ${OBJS}

${OBJS_PATH}:
	@mkdir -p $@

${OBJS_PATH}%.o: ${LIBFT_PATH}%.c ${HEADER_FILES}
	@${CC} ${CFLAGS} -c $< -o $@
	@printf "$(GREEN)▓$(EOC)"

clean:
	@echo "$(BOLD)$(YELLOW)Remove libft... |$(GREEN)| done$(EOC)"
	@rm -rf ${OBJS_PATH}

fclean: clean
	@echo "$(BOLD)$(YELLOW)Remove all libft|$(GREEN)| done$(EOC)"
	@rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
