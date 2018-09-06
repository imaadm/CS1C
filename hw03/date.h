
#include <string>
#include <iostream>

using namespace std;

class Date
{
    private:
    int year;
    int month;
    int day;

    public:
    Date()
    {
        year = 0000;
        month = 0;
        day = 0;
    }

        Date(int y,int m,int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void printDate()
    {
        cout << month << "/" << day << "/" << year;
    }
};