SRCS = main.cpp newZombie.cpp  randomChump.cpp  Zombie.cpp  

NAME = main

OBJ = $(SRCS:.cpp=.o)

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) :$(OBJ) 
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) -o $@ -c $^ 

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
