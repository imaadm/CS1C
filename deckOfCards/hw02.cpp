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

    cout << "Initial deck:" << endl;
    deck[DECK_SIZE].printDeck(deck);

    //system("clear");
    cout << endl;
    cout << "Shuffling deck...";
    deck[DECK_SIZE].shuffleDeck(deck);

    cout << endl;
    cout << "Shuffled deck:" << endl;
    deck[DECK_SIZE].printDeck(deck);

    cout << endl;
    cout << "For the deck to return to normal, it will require 8 total shuffles.";
    for (int i = 0; i < 7; i++)
        deck[DECK_SIZE].shuffleDeck(deck);
    
    cout << endl << endl;
    cout << "Final deck:" << endl;
    deck[DECK_SIZE].printDeck(deck);
}