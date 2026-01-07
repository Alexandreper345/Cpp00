NAME = Phonebook
CPP = c++
FLAGS = -Wall -Wextra -Werror
SRCC = main.cpp contact.cpp phonebook.cpp
OBJ = ${SRCC: .cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CPP} ${FLAGS} ${OBJ} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re: fclean all