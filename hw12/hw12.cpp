#include <iostream>
#include <string>
#include "queue.h"

using namespace std;

void printTest(int x);
int main()
{
    QueueType<int> ints;
    QueueType<double> doubles;
    QueueType<string> strings;

    ints.initializeQueue(10);
    doubles.initializeQueue(10);
    strings.initializeQueue(10);

    int num1 = 7;
    double num2 = 4.0;
    string S = "Name";

    ints.addQueueType(num1);
    doubles.addQueueType(num2);
    strings.addQueueType(S);
    ints.addQueueType(2);
    doubles.addQueueType(7.0);

    strings.printQueue();
    cout << endl;
    strings.deleteQueueType();
    strings.addQueueType("Imaad");
    ints.addQueueType(7);
    strings.addQueueType("Test Post");

    ints.printQueue();
    cout << endl;
    doubles.printQueue();
    cout << endl;
    strings.printQueue();
    cout << endl;
    ints.deleteQueueType();
    ints.printQueue();

//HW13:

    int p; 
    cout << "Terminates after incorrect input, outputs correct input:" << endl;
    cin >> p;
    printTest(p);    

    QueueType<int> tests;

    tests.initializeQueue(0);
    tests.deleteQueueType();

    tests.initializeQueue(0);
    tests.addQueueType(1);

}

//HW13:

void printTest(int x)
{
    assert(x != 0);
    cout << x << endl;
}