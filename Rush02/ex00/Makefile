# This is our MAKEFILE for rush-02 #

NAME = rush-02
CC = gcc
RM = rm -f
COMPILE_FLAGS =	-Wall -Wextra -Werror
SRC = byte_size.c copy_dict_to_buff.c ft_check_string.c main.c parse_dict.c print_block.c print_cent.c print_dec.c print_three_numbers.c print_uni.c search_dict.c try_to_find.c

all: compile

compile:
	@rm -f $(NAME)
	@$(CC) $(COMPILE_FLAGS) $(SRC) -o $(NAME)

re: fclean all

fclean: clean
	@$(RM) *.o

clean:
	@$(RM) a.out
	@$(RM) *.log
	@$(RM) $(NAME)
	

