CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -I$(LIBFT_DIR)
RM = rm -f

NAME = push_swap

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj
LIBFT_DIR = libft

SRC =	$(SRC_DIR)/stack_initialisation/errors.c \
      	$(SRC_DIR)/stack_initialisation/init_stack.c \
		$(SRC_DIR)/sorting/sort_three.c \
		$(SRC_DIR)/sorting/sort_utils.c \
		$(SRC_DIR)/sorting/sort_above_three.c \
		$(SRC_DIR)/sorting/min_to_top.c \
		$(SRC_DIR)/commands/swap.c \
		$(SRC_DIR)/commands/rev_rotate.c \
		$(SRC_DIR)/commands/rotate.c \
		$(SRC_DIR)/commands/push.c \
		$(SRC_DIR)/commands/ab_push.c \
		$(SRC_DIR)/commands/ba_push.c \
		$(SRC_DIR)/push_swap.c \
		$(SRC_DIR)/commands/push_utils.c \


OBJ = $(SRC:.c=.o)

LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
