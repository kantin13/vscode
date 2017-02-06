CC	=	g++
RM	=	rm -f
NAME	=	exo5
SRC	=	exo5.cpp
OBJ	=	$(SRC:.cpp=.o)

all:	$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all