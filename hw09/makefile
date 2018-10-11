CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = hw09.o

all: hw09

hw09: hw09.cpp hw09.o
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

hw09.0: hw09.cpp shape.h rectangle.h triangle.h
	$(CC) $(FLAGS) -c hw09.cpp -o hw09.o

clean: 
	rm *.0 hw09 hw09.tar

tar:
	tar cf hw09.tar hw09.scr Makefile hw09.cpp shape.h rectangle.h triangle.h

