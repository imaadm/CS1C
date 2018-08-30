//files needed:
//card.h
//console.io
//hw02.cpp 
//makefile

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Card
{
  private:
	string suit;
	string rank;
  public:
	Card()
	{
		suit = "\n";
		rank = "\n";
	}

	Card(string s, string r)
	{
		suit = s;
		rank = r;
	}
	void createDeck(Card cards[]);
	void printDeck(Card cards[]);
	void shuffleDeck(Card cards[]);

};