#include <iostream>
#include <assert.h>
using namespace std;

int main()
{
    int p; 
    cout << "Terminates after incorrect input, outputs correct input:" << endl;
    cin >> p;
    printPass(p);

}

void printPass(int x)
{
    assert(x != NULL);
    cout << x << endl;
}
