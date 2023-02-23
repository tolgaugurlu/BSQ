NAME = bsq

CC = gcc

FLAGS = -Wall -Werror -Wextra

SOURCES = error_handler.h reader.c reader.h strings.c strings.h Types.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $(NAME) $(SOURCES)
