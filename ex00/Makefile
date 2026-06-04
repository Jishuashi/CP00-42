NAME        = megaphone

CC          = c++
CFLAGS      = -Wall -Wextra -Werror -g -std=c++98
RM          = rm -f

MAIN        = main.cpp
SRCS        = 
OBJS        = $(SRCS:.c=.o)

GREEN       = \033[0;32m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(MAIN)
	@echo -e "$(GREEN)Compiling $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) $(MAIN) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning objects..."
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning executable and library..."
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re