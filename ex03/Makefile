include mk/source.mk

RM			= rm -f

CFLAGS 		= -W -Wall -Wextra
CPPFLAGS 	= -I ./include
LDFLAGS		=

SRC_DIR 	= src/
SRC_MAIN 	= main.c

OBJ_SRC 	= $(addprefix $(SRC_DIR), $(SRC:.c=.o))
OBJ_MAIN 	= $(addprefix $(SRC_DIR), $(SRC_MAIN:.c=.o))

$(BINARY_NAME): $(OBJ_SRC) $(OBJ_MAIN)
	@echo -e "\e[36;1m\nMAKE $(BINARY_NAME)\n\e[0m"
	@$(CC) -o $@ $^

all: $(BINARY_NAME)

clean:
	@echo -e "\e[31;1mCLEANING OBJ: $(BINARY_NAME)\e[0m"
	@$(RM) $(OBJ_MAIN) $(OBJ_SRC) $(OBJ_SRC:.o=.gcno) $(OBJ_SRC:.o=.gcda)
	@$(MAKE) -C ./tests/ $@ --no-print-directory

fclean: clean
	@echo -e "\033[31;1mCLEANING: $(BINARY_NAME)\033[0m"
	@$(RM) $(BINARY_NAME)
	@make -C ./tests/ $@ --no-print-directory

tests_run: clean
	@echo -e "\e[34;1m\nUNIT TEST\n\e[0m"
	@$(MAKE) -C ./tests/ --no-print-directory

re: fclean all

.PHONY: $(BINARY_NAME) all clean fclean tests_run re
