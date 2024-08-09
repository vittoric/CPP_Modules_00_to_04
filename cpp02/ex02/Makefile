# ANSI Colors
RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
BLUE=\033[0;34m
MAGENTA=\033[0;35m
CYAN=\033[0;36m
RESET=\033[0m

# Emojis
SUCCESS_EMOJI=✨
CLEAN_EMOJI=🧹
RECYCLE_EMOJI=♻️
WARNING_EMOJI=⚠️
ERROR_EMOJI=❌
COOL_EMOJI=😎

NAME = fixed3

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFLAGS = -MMD -MP

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo "${SUCCESS_EMOJI} ${GREEN} Successful compilation! ${RESET}"

%.o: %.cpp
	@echo "${CYAN} Compiling $<...${RESET}"
	@${CC} ${CFLAGS} ${CPPFLAGS} -c $< -o $@

-include ${DEPS}

clean:
	@echo "${CLEAN_EMOJI} ${MAGENTA}Cleaning files...${RESET}"
	@${RM} ${OBJS} ${DEPS}

fclean: clean
	@echo "${RECYCLE_EMOJI} ${YELLOW} Removing executable...${RESET}"
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
