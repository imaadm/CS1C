CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = hw07ec.o

all: hw07

hw07: hw07.cpp hw07ec.o
	$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

hw07ec.0: hw07ec.cpp hw07ec.h
	$(CC) $(FLAGS) -c hw07ec.cpp -o hw07ec.o

clean: 
	rm *.0 hw07 hw07.tar

tar:
	tar cf hw07.tar hw07.scr Makefile hw07.cpp hw07ec.h hw07ec.cpp

