SRC_DIR	= ./srcs
INC_DIR	= ./includes

SRCS	= $(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_swap.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_strcmp.c

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

AR	= ar rcs

RM	= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all