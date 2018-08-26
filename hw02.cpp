#include <iostream>
#include <iomanip>
#include <string>
#include<stdio.h>
#include<stdlib.h>
#include "card.h"
#include "card.cpp"

using namespace std;

int main()
{
    Card deck[52];
    deck[52].createDeck(deck);
    
    cout << "Printing deck..." << endl;
    deck[52].printDeck(deck);

    system("clear");

    cout << "Shuffling deck..." << endl;
    deck[52].shuffleDeck(deck);

    cout << "Printing deck..." << endl;
    deck[52].printDeck(deck);
}
