NAME = mini_skysrcaper_solver
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = src/main.c \
		src/core.c \
		src/utils.c
INCLUDES = includes/include.h

all: $(NAME)

run: $(NAME)
	@./$(NAME)

$(NAME): $(SRCS) $(INCLUDES)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

build: $(NAME)

debug: $(SRCS) $(INCLUDES)
	@$(CC) $(FLAGS) -g $(SRCS) -o $(NAME); gdb ./$(NAME) --tui

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all run build clean re
