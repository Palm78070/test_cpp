NAME := outfile

CXX := c++

CXXFLAGS := -Wall -Werror -Wextra --std=c++98

SRCS := main.cpp \
		Warlock.cpp \
		ASpell.cpp \
		ATarget.cpp \
		Fwoosh.cpp \
		Dummy.cpp \

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf *.o *.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
