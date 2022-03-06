##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for libstrings
##

# Library final name
NAME := libstrings.a

# List of library source files
SRC := my_strlen.c \
       my_strcat.c
SRC := $(addprefix src/, $(SRC))

CFLAGS = -I include/

# List of objects from source files
OBJ := $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	gcc -c $< -o $@ $(CFLAGS)

$(NAME): $(OBJ)
	ar cr $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
