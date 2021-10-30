# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mli <mli@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 12:24:46 by mli               #+#    #+#              #
#    Updated: 2021/10/30 15:27:02 by mli              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EOC = \033[0m
BOLD = \033[1m
GREEN = \033[32m
YELLOW = \033[33m

# ############################################################################ #

PS_NAME = push_swap

SRCS_PATH = srcs/

LIBFT_PATH = ${SRCS_PATH}/libft/
LIBFT = libft.a

LIBS = ${addprefix ${LIBFT_PATH}, ${LIBFT}}

CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifeq ($(f), debug)
	CFLAGS += -fsanitize=address -g3
endif

PUSH_SWAP_PATH = push_swap/
PUSH_SWAP_FILES = main.c
PUSH_SWAP_SRCS = ${addprefix ${PUSH_SWAP_PATH}, ${PUSH_SWAP_FILES}}

SRCS_FILES = ${PUSH_SWAP_SRCS}

OBJS_PATH = .obj/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS_FILES:.c=.o}}
OBJS_PATHS = ${OBJS_PATH} \
	${addprefix ${OBJS_PATH}, ${PUSH_SWAP_PATH}}

all: ${LIBS}
	@printf "${BOLD}Make ${PS_NAME}${EOC}: "
	@make ${PS_NAME}

$(PS_NAME): ${LIBS} ${OBJS_PATHS} ${OBJS} ${HEADER_FILES}
	@echo ""
	@${CC} ${CFLAGS} -o $@ ${OBJS} -L ${LIBFT_PATH} -lft

${OBJS_PATHS}:
	@mkdir -p $@

${OBJS_PATH}%.o: ${SRCS_PATH}%.c ${HEADER_FILES}
	@${CC} ${CFLAGS} -c $< -o $@
	@printf "$(YELLOW)▓$(EOC)"

$(LIBFT_PATH)$(LIBFT):
	@make -C ${LIBFT_PATH}

clean:
	@echo "$(BOLD)$(YELLOW)Remove......... |$(GREEN)| done$(EOC)"
	@rm -rf ${OBJS_PATH}

fclean: clean
	@echo "$(BOLD)$(YELLOW)Remove all..... |$(GREEN)| done$(EOC)"
	@rm -rf $(PS_NAME)
	@make -C ${LIBFT_PATH} fclean

re: fclean all

.PHONY: all clean fclean re
