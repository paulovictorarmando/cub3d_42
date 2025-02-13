# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parmando <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 12:33:52 by parmando          #+#    #+#              #
#    Updated: 2025/02/13 12:34:32 by parmando         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

SRCS = main.c


OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

MLX = -L./mlx -lmlx -lX11 -lXext

MLX_DIR = ./mlx

LIBFT_DIR = ./libft

MLX_LIB = $(MLX_DIR)/libmlx_linux.a

LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(MLX_LIB) $(NAME)

$(NAME): ${OBJS}
	@ ${CC} ${CFLAGS} ${OBJS} -o ${NAME} -I. ${MLX} ${LIBFT}

$(MLX_LIB):
	make -C $(MLX_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	rm -f ${OBJS}

fclean: clean
	make fclean -C $(LIBFT_DIR)
	make clean -C $(MLX_DIR)
	rm -f ${NAME}

re: fclean all
