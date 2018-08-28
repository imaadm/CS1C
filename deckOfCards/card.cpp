#include <iomanip>
#include <iostream>
#include <string>
#include "card.h"

using namespace std;

void Card::createDeck(Card cards[])
	{
		int x = 0;
		string suit[] = {"Spades", "Clubs", "Hearts", "Diamonds"};
		char rank[] = {'2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A'};
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				cards[x] = Card(suit[i], rank[j]);
				x++;
			}
		}
	}

	void Card::printDeck(Card cards[])
	{
		for (int i = 0; i < 52; i++)
			cout << cards[i].rank << " of " << cards[i].suit << endl;
	}

	void Card::shuffleDeck(Card cards[])
	{
		Card left[26];
		Card right[26];
		int o = 0;
		int l = 0;
		int r = 0;
		for (int i = 0; i < 26; i++)
		{
			left[i] = cards[i];
			right[o] = cards[i+26];
		}

		for (int i = 0; i < 26; i++)
		{
			cards[(i*2)] = left[i];
			cards[(i*2)+1] = right[i];
		}
    }