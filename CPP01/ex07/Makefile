_BOLD		=\e[1m
_R			=\e[0m

_RED		=\e[91m
_GREEN		=\e[92m
_YELLOW		=\e[93m
_BLUE		=\e[94m
_MAGENTA	=\e[35m
_CYAN		=\e[96m
_WHITE		=\e[97m

###############################

NAME = replace

SRC = 	main.cpp \

PATHSRCS = .
SRCS = $(addprefix $(PATHSRCS)/,$(SRC))

### Objets ###
OBJ_DIR = obj
OBJ = $(addprefix obj/,$(SRC:.cpp=.o))
vpath %.cpp $(PATHSRCS)

### Flags ###
FLAGS = -Wall -Wextra -Werror -g -fsanitize=address

all: $(NAME)

$(OBJ_DIR)/%.o: $(PATHSRCS)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@clang++ $(FLAGS) -c $< -o $@
	@echo "$(_YELLOW)Compiling :$(_WHITE) $<$(_R)"

$(NAME): titre $(OBJ)
	@echo "$(_YELLOW)Compilation completed.$(_R)"
	@(clang++ $(FLAGS) $(OBJ) -o $(NAME))
	@(echo "$(_YELLOW)Executable $(NAME) created.$(_R)")

clean:
	@echo "$(_BLUE)Clean$(_R)"
	@(rm -rf ./srcs/*.o)
	@(rm -rf $(OBJ_DIR))

fclean:	clean
	@echo "$(_BLUE)Fclean$(_R)"
	@(rm -rf $(NAME))

re:	fclean all

titre:
	@echo "\e[1;93mCPP: Ex07: Sed - 42 project -$(_R)"
	@echo "\e[1;93m_____________________________$(_R)"

.PHONY:	all clean fclean re titre
