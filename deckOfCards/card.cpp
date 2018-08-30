#include <iomanip>
#include <iostream>
#include <string>
#include "card.h"

using namespace std;

void Card::createDeck(Card cards[])
	{
		int x = 0;
		string suit[] = {"Spades", "Clubs", "Hearts", "Diamonds"};
		string rank[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Ace", "Jack", "Queen", "King"};
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
		{
			cout << cards[i].rank << " of " << cards[i].suit << endl;
		}
	}

	void Card::shuffleDeck(Card cards[])
	{
		Card left[26];
		Card right[26];

		for (int i = 0; i < 26; i++)
		{
			left[i] = cards[i];
	//		left[i].suit = cards[i].suit;
	//		left[i].rank = cards[i].rank;
			right[i] = cards[i+26];
	//		right[i].suit = cards[i+26].suit;
	//		right[i].rank = cards[i+26].rank;
		}

		for (int i = 0; i < 26; i++)
		{
			cards[(i*2)] = left[i];
	//		cards[(i*2)].suit = left[i].suit;
	//		cards[(i*2)].rank = left[i].rank;
			cards[(i*2)+1] = right[i];
	//		cards[(i*2)+1].suit = right[i].suit;
	//		cards[(i*2)+1].rank = right[i].rank;
		}
    }