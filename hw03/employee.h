#ifndef _EMPLOYH_
#define _EMPLOYH_

#include <string>
#include <iostream>
#include "date.h"
using namespace std;

class Employee
{
    private:
    string name;
    int id;
    string phone;
    int age;
    string title;
    string salary;
    Date hire;
    
    public:
    Employee()
    {
        name = "Empty";
        id = 0000;
        phone = "000-000-0000";
        age = 0;
        title = "Student";
        salary = "$0";
    }
    Employee(string n,int i,string p,int a, string t,string s,int y,int m,int day)
    {
        name = n;
        id = i;
        phone = p;
        age = a;
        title = t;
        salary = s;
        hire.editDate(y,m,day);
    }

    void editName(string n)
    {
        name = n;
    }

    void editId(int i)
    {
        id = i;
    }

    void editPhone(string p)
    {
        phone = p;
    }

    void editAge(int a)
    {
        age = a;
    }
    void editTitle(string t)
    {
        title = t;
    }

    void editSalary(string s)
    {
        salary = s;
    }
    
    void editHire(Date h)
    {
        hire = h;
    }

    void printEmp()
    {
        cout << name << " | " << phone << " | " << age << " | " << title << " | " << salary << " | ";
        hire.printDate();
    }
};
#endif