clear_terminal := clear
compile := clang++
compile_option := -c -std=c++98
enable_warnings := -Wall -Wextra -Werror #-g -fsanitize=address
#header_file := ./minishell.h
library_option := -l
NAME := megaphone
#norminette := norminette
output_name_option := -o
program_file := ./${NAME}
remove_file := rm
remove_file_option := -f
rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))
source_files := $(call rwildcard,./,*.cpp)
object_files := $(source_files:.cpp=.o)
#include_dirs := includes libs/libft/
#includes := $(addprefix -I, $(include_dirs))
#turn_warnings_into_errors := -Werror

default_rule: clear_terminal remove_program all

clear_terminal:
	@${clear_terminal}

remove_program:
	@${remove_file} ${remove_file_option} ${program_file}

#execute_program:
#	@${program_file}

# The "all", "${NAME}", "clean", "fclean" and "re" make rules are mandatory
# by 42's Norm (version 3 at the time of writting this comment).

all: ${NAME} #${program_file}

%.o: %.c
	@${compile} \
		${enable_warnings} \
		${compile_option} $< \
		${output_name_option} $@ \
		${includes}

${NAME}: ${object_files}
	@${compile} \
		${enable_warnings} \
		${output_name_option} ${program_file} \
		${object_files} \
		${includes}

clean:
	@${remove_file} ${remove_file_option} ${object_files}

fclean: clean
	@${remove_file} ${remove_file_option} ${program_file}

re: fclean all

.PHONY: default_rule clear_terminal remove_program norminette compile execute_program all clean fclean re
