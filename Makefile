NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_substr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_lstadd_back_bonus.c \
	  ft_lstadd_front_bonus.c \
	  ft_lstclear_bonus.c \
	  ft_lstdelone_bonus.c \
	  ft_lstiter_bonus.c \
	  ft_lstlast_bonus.c \
	  ft_lstmap_bonus.c \
	  ft_lstnew_bonus.c \
	  ft_lstsize_bonus.c \
	  get_next_line.c get_next_line_utils.c

OBJ = ${SRC:.c=.o}

CC = cc -Wall -Wextra -Werror

all: ${NAME}

$(NAME): ${OBJ} libft.h
	ar rc ${NAME} ${OBJ}
	@echo "$(CYAN)$(BOLD)$(NAME)$(RESET) $(GREEN)create!$(RESET)"

%.o: %.c libft.h
	${CC} -I. -c $< -o $@

clean:
	@echo "$(GREEN)Cleaning up...$(RESET)"
	rm -rf ${OBJ} ${OBJ_BONUS}
	@echo "$(GREEN)Clean finished!$(RESET)"

fclean: clean
	@echo "$(GREEN)Fcleaning up...$(RESET)"
	rm -rf ${NAME}
	@echo "$(GREEN)Fclean finished!$(RESET)"

re: fclean all

.PHONY: all clean fclean re 

# COLORS
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
BOLD = \033[1m
RESET = \033[0m
