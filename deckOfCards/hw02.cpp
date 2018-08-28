#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "card.h"

using namespace std;

int main()
{
	const int DECK_SIZE = 52;
    Card deck[DECK_SIZE];

    deck[DECK_SIZE].createDeck(deck);

    cout << "Printing deck..." << endl;
    deck[DECK_SIZE].printDeck(deck);

    system("clear");

    cout << "Shuffling deck..." << endl;
    deck[DECK_SIZE].shuffleDeck(deck);

    cout << "Printing deck..." << endl;
    deck[DECK_SIZE].printDeck(deck);
}