
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
    Employee(string n,int i,string p,int a, string t,string s)
    {
        name = n;
        id = i;
        phone = p;
        age = a;
        title = t;
        salary = s;
    }

    string editName(string n)
    {
        name = n;
    }

    int editId(int i)
    {
        id = i;
    }

    string editPhone(string p)
    {
        phone = p;
    }

    int editAge(int a)
    {
        age = a;
    }
    string editTitle(string t)
    {
        title = t;
    }

    int editSalary(string s)
    {
        salary = s;
    }
    
    string editHire(Date h)
    {
        hire = h;
    }

    void printEmp()
    {
        cout << name << " | " << phone << " | " << age << " | " << title << " | " << salary << " | ";
        hire.printDate();
    }
};