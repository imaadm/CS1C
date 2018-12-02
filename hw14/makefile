CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = hw14.o

all: hw14

hw14: hw14.cpp hw14.o
	$(CC) $(FLAGS) hw14.cpp -o hw14 $(OBJS)

hw14ec.0: hw14.cpp list.h
	$(CC) $(FLAGS) -c hw14.cpp -o hw14.o

clean: 
	rm *.0 hw14 hw14.tar

tar:
	tar cf hw14.tar hw14.scr Makefile hw14.cpp list.h 

