//need in a .zip:
// hw01.cpp
//functions.h
//consoleio.txt

#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "functions.h"
using namespace std;
//randomnumbers program
int main()
{
	int num;
	char choice;

	srand(time(NULL)); //intializing random generator seed
	num = rand() % 1000 + 100; //generating number between 100-1000

	int d1 = num / 100 % 10;
	int d2 = num / 10 % 10;
	int d3 = num % 10;

	cout << "Random number: " << num << endl;
	cout << "A) Sum the digits" << endl;
	cout << "B) Triple the number" << endl;
	cout << "C) Reverse the digits" << endl;
	cin >> choice;

	switch (toupper(choice))
	{
	case 'A':
		cout << "Sum: " << d1+d2+d3 << endl;
		break;
	case 'B':
		cout << "Triple: " << num*3 << endl;
		break;
	case 'C':
		cout << "Reversed: " << d3 << d2 << d1 << endl;
		break;
	}

//part b
system("pause");
system("cls");

string name = "Imaad Mohammed";
	cout << "My name is " << name << endl;
	enum gender {MALE, FEMALE};

	gender m = MALE;
	switch(m)
	{
	case MALE:
	cout << "I am a male" << endl;
		break;
	default:
		break;
	}

// part c

	int nums[10];
	for (int i = 0; i < 10; i++)
		nums[i] = rand() % 100 + 1; //1-100

//part d

	sort(begin(nums),end(nums));

//part e
system("pause");
system("cls");

	ofstream outFile ("nums.txt");
	if (outFile.is_open())
 	 {
		for (int i = 0; i < 10; i++)
   	 	outFile << nums[i];
		outFile.close();
 	 }
  	else cout << "Unable to open file";
	
// part f

read();

// part g

printArray(nums);


