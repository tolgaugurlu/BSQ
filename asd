NAME = bsq

CC = gcc

FLAGS = -Wall -Werror -Wextra

SOURCES = ./src/main.c ./includes/bsq/error_handler.h ./src/reader.c ./includes/bsq/reader.h ./src/strings.c ./includes/bsq/strings.h ./includes/bsq/types.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SOURCES)
