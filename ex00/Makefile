NAME = megaphone
CPP = c++  
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCC = megaphone.cpp
OBJ = ${SRCC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CPP} ${FLAGS} ${OBJ} -o ${NAME}

.cpp.o:
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re: fclean all