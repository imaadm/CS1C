#ifndef _PROGH_
#define _PROGH_

#include <string>
#include <iostream>
#include "date.h"
#include "employee.h"

using namespace std;

class Programmer:public Employee
{
    private:
    int dept;
    string sup;
    int percent;
    bool cplus;
    bool java;
    
    public:
    Programmer()
    {
       int dept = 0;
       string sup = "None";
       int percent = 0;
       bool cplus = false;
       bool java = false;
    }

    Programmer(int d, string super, int per, bool c, bool j, string n,int i,string p,int a, string t,string s,int y, int m, int day)
    :Employee(n,i,p,a,t,s,y,m,day)
    {
       dept = d;
       sup = super;
       percent = per;
       cplus = c;
       java = j;
    }

    void printProg()
    {
        cout << dept << " | " << sup << " | " << percent << " | "  << cplus << " | " << java << " | ";
        printEmp();
        cout << endl;

    }
};

#endif
