include ../mk/source.mk

RM				= rm -f

CFLAGS			= -W -Wall -Wextra --coverage
CPPFLAGS		= -I ../include/
LDFLAGS			= -lcriterion --coverage

SRC_DIR			= ../src/

SRC_TEST 		=	get_stdin_content.c			\
					strcpy.c					\
					strdup.c					\
					strlen.c


OBJ_SRC 		= $(addprefix $(SRC_DIR), $(SRC:.c=.o))
OBJ_SRC_TEST 	= $(SRC_TEST:.c=.o)

DIR_GCOVR		= coverage_report

BINARY_TEST		= unit_tests

$(BINARY_TEST): $(OBJ_SRC) $(OBJ_SRC_TEST)
	@echo -e "\e[36;1m\nMAKE $(BINARY_TEST)\n\e[0m"
	@$(CC) -o $@ $^ $(LDFLAGS)
	@./$(BINARY_TEST)

clean:
	@echo -e "\e[31;1mCLEANING OBJ: $(BINARY_TEST)\e[0m"
	@$(RM) $(OBJ_SRC_TEST) $(OBJ_SRC_TEST:.o=.gcno) $(OBJ_SRC_TEST:.o=.gcda) ${DIR_GCOVR}

fclean:
	@echo -e "\033[31;1mCLEANING: $(BINARY_TEST)\033[0m"
	@$(RM) $(BINARY_TEST)

gcovr: clean $(BINARY_TEST)
	# IGNORE the comment line for the first step.
	#@mkdir -p ../${DIR_GCOVR} && cd ../${DIR_GCOVR}; \
		# write your gcovr command here
