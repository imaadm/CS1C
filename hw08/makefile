CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = hw08.o

all: hw08

hw08: hw08.cpp 
	$(CC) $(FLAGS) hw08.cpp -o hw08 $(OBJS)

clean: 
	rm *.0 hw08 hw08.tar

tar:
	tar cf hw08.tar hw08.scr makefile hw08.cpp 
