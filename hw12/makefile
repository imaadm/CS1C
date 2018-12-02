CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = hw12.o

all: hw12

hw12: hw12.cpp hw12.o
	$(CC) $(FLAGS) hw12.cpp -o hw12 $(OBJS)

hw12.o: hw12.cpp queue.h
	$(CC) $(FLAGS) -c hw12.cpp -o hw12.o

clean: 
	rm *.0 hw12 hw12.tar

tar:
	tar cf hw12.tar hw12.scr makefile hw12.cpp queue.h

