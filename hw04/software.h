#ifndef _SOFTH_
#define _SOFTH_
#include <string>
#include <iostream>
#include "date.h"
#include "employee.h"

using namespace std;

class Architect:public Employee
{
    private:
    int dept;
    string sup;
    int percent;
    int experience;

    public:
    Architect()
    {
        dept = 0;
        sup = "None";
        percent = 0;
        experience = 0;
    }

    Architect(int d, string super, int per, int ex, string n,int i,string p,int a, string t,string s,int y, int m, int day)
    :Employee(n,i,p,a,t,s,y,m,d)
    {
        dept = d;
        sup = super;
        percent = per;
        experience = ex;
    }

    void printArch()
    {
        cout << dept << " | " << sup << " | " << percent  << " | " << experience << " | ";
        printEmp();

    }
};

#endif
