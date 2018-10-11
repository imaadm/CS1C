CC = g++

FLAGS = -std=c++14 -Wall -g

OBJS = card.o

all: hw02

hw02: hw02.cpp card.o
	$(CC) $(FLAGS) hw02.cpp -o hw02 $(OBJS)

cardDeckClass.0: card.cpp card.h
	$(CC) $(FLAGS) -c card.cpp -o card.o

clean: 
	rm *.0 hw02 hw02.tar

tar:
	tar cf hw02.tar hw02.scr Makefile hw02.cpp card.h card.cpp

