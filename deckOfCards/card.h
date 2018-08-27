//files needed:
//co
//card.h
//card.cpp
//hw02.cpp (console io)
//makefile

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Card
{
  private:
	string suit;
	char rank;

  public:
	Card()
	{
		suit = "Spade";
		rank = '2';
	}

	Card(string s, char r)
	{
		suit = s;
		rank = r;
	}

	void createDeck(Card cards[52])
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

	void printDeck(Card cards[52])
	{
		for (int i = 0; i < 52; i++)
			cout << cards[i].rank << "of " << cards[i].suit << endl;
	}

	void shuffleDeck(Card cards[52])
	{
		Card left[26];
		Card right[26];
		int o = 0;
		int l = 0;
		int r = 0;
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
			if (l < 26)
			{
				cards[j] = left[l];
				l++;
			}
			if (r < 26)
			{
				cards[j] = right[r];
			}
		}
	}
};