NAME = bsq

CC = gcc

FLAGS = -Wall -Werror -Wextra

SOURCES = ./src/main.c ./includes/error_handler.h ./src/reader.c ./includes/reader.h ./src/strings.c ./includes/strings.h ./includes/types.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SOURCES)
