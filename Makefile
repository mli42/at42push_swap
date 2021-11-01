# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mli <mli@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 12:24:46 by mli               #+#    #+#              #
#    Updated: 2021/11/01 12:06:46 by mli              ###   ########.fr        #
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

COMMON_PATH = common/
COMMON_FILES = printStack.c parse.c error.c parse_count.c ft_iswap.c
COMMON_SRCS = ${addprefix ${COMMON_PATH}, ${COMMON_FILES}}

HELPER_PATH = ${COMMON_PATH}/helper/
HELPER_FILES = getHelper.c get_top_end.c get_size_edge.c
HELPER_SRCS = ${addprefix ${HELPER_PATH}, ${HELPER_FILES}}

OPERATORS_PATH = ${COMMON_PATH}/operators/
OPERATORS_FILES = operator_s.c operator_p.c operator_r.c operator_rr.c
OPERATORS_SRCS = ${addprefix ${OPERATORS_PATH}, ${OPERATORS_FILES}}

SRCS_FILES = ${addprefix , \
	${PUSH_SWAP_SRCS} \
	${COMMON_SRCS} \
	${HELPER_SRCS} \
	${OPERATORS_SRCS} \
	}

OBJS_PATH = .obj/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS_FILES:.c=.o}}
OBJS_PATHS = ${addprefix ${OBJS_PATH}, \
	${PUSH_SWAP_PATH} \
	${COMMON_PATH} \
	${HELPER_PATH} \
	${OPERATORS_PATH} \
	}

all:
	@make -C ${LIBFT_PATH}
	@printf "${BOLD}Make ${PS_NAME}${EOC}: "
	@make ${PS_NAME}

$(PS_NAME): ${LIBS} ${OBJS_PATHS} ${OBJS} ${HEADER_FILES}
	@echo ""
	@${CC} ${CFLAGS} -o $@ ${OBJS} -L ${LIBFT_PATH} -lft

${OBJS_PATHS}:
	@mkdir -p $@

${OBJS_PATH}%.o: ${SRCS_PATH}%.c ${HEADER_FILES}
	@${CC} ${CFLAGS} -c $< -o $@
	@printf "$(GREEN)▓$(EOC)"

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
