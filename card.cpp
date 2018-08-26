#include "card.h"
#include <iostream>

using namespace std;

Card::Card()
{
	suit = "Spade";
	rank = '2';
}

Card::Card(string s, char r)
{
	suit = s;
	rank = r;
}

void Card::createDeck(Card cards[52])
{
int x = 0;
string suit[] = { "Spades", "Clubs", "Hearts", "Diamonds"};
char rank[] = { '2','3','4','5','6','7','8','9','10','J','Q','K','A' };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{		
        	cards[x] = Card(suit[i], rank[j]);
            x++;
		}		
	}
}

void Card::printDeck(Card cards[52])
{
	for (int i = 0; i < 52; i++)
	cout << cards[i].rank << "of " << cards[i].suit << endl;
}

void Card::shuffleDeck(Card cards[52])
{
	Card left[26];
	Card right[26];
	int o = 0;
	for (int i = 0; i < 26; i++)
	{
		left[i] = cards[i];
	}
	for (int x = 27; x < 52; x++)
	{
		right[o] = cards[x];
		o++;
	}

	for (int j = 0; j < 52; j++)
	{
		cards[j] = left[j];
		if(j < 51)
			cards[j+1] = right[j];
	}
}