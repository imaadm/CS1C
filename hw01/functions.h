#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void read()
{
ifstream inFile ("nums.txt");
	string line;
	if (inFile.is_open())
  	{
    while (getline(inFile,line))
      cout << line << '\n';
    inFile.close();
  }
  	else cout << "Unable to open file";
}
void printArray(int array[])
{
	for (int i = 0; i < 10; i++)
		cout << array[i] << endl;
} 