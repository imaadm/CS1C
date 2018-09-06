CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = jobs.o

all: hw03

hw03: hw03.cpp jobs.o
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

jobs.o: date.h employee.h programmer.h software.h
	$(CC) $(FLAGS) -c card.cpp -o card.o

clean: 
	rm *.0 hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr Makefile hw03.cpp date.h employee.h programmer.h software.h

