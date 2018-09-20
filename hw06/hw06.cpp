#include <iostream>
#include <string>

using namespace std;

string recursiveString(string &s, int l, int r);

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string a2 = "abcdefghijklmnopqrstuvwxyz";
    string a3 = "abcdefghijklmnopqrstuvwxyz";
    string first = recursiveString(alphabet,11,18);
    string second = recursiveString(a2,4,22);
    string third = recursiveString(a3,0,25);
    cout << "First swap: " << first << endl;
    cout << "Second swap: " << second << endl;
    cout << "Third swap: " << third << endl;

}

string recursiveString(string &s, int l, int r)
{

    if (l >= r)
        return "Could not reverse";
    else
    {
    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;

    recursiveString(s,l+1,r-1);
    }

    return s;


}