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

NAME = base

SRC = main.cpp 	\

PATHSRCS = .
SRCS = $(addprefix $(PATHSRCS)/,$(SRC))

### Objets ###
OBJ_DIR = obj
OBJ = $(addprefix obj/,$(SRC:.cpp=.o))
vpath %.cpp $(PATHSRCS)

### Flags ###
FLAGS = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address

all: $(NAME)

$(OBJ_DIR)/%.o: $(PATHSRCS)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@clang++ $(FLAGS) -c $< -o $@
	@printf "$(_YELLOW)Compiling :$(_WHITE) $<$(_R)\n"

$(NAME): titre $(OBJ)
	@printf "$(_YELLOW)Compilation completed.$(_R)\n"
	@(clang++ $(FLAGS) $(OBJ) -o $(NAME))
	@(printf "$(_YELLOW)Executable $(NAME) created.$(_R)\n")

clean:
	@printf "$(_BLUE)Clean$(_R)\n"
	@(rm -rf ./srcs/*.o)
	@(rm -rf $(OBJ_DIR))

fclean:	clean
	@printf "$(_BLUE)Fclean$(_R)\n"
	@(rm -rf $(NAME))

re:	fclean all

titre:
	@printf "\e[1;93mCPP: Ex00: Base - 42 project -$(_R)\n"
	@printf "\e[1;93m___________________________________$(_R)\n"

.PHONY:	all clean fclean re titre
