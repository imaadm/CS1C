//files needed:
//co
//card.h
//card.cpp
//hw02.cpp (console io)
//makefile

#include <iomanip>

using namespace std;

class Card
{
private:
	string suit;
	char rank;

public:

	Card();
	Card(string s, char r);

	void createDeck(Card cards[]);
	void printDeck(Card cards[]);
	void shuffleDeck(Card cards[]);

};