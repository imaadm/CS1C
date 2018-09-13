#ifndef _EMPLOYH_
#define _EMPLOYH_

#include <string>
#include <iostream>
#include "date.h"

using namespace std;

class Employee
{

 //   friend bool isEqualP(const Employee&);
 //   bool operator==(const Employee&);
 //   friend int addAge(int add);
 //   int operator+(int add);

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

    bool isEqualP(const Employee& emp)
    {
        return emp.phone == phone;
    }
    
    bool operator==(const Employee& emp)
    {  
        return emp.phone == phone;

    }

    friend ostream& operator<<(ostream& osOut, const Employee&emp)
    {
         osOut << emp.name << " | " << emp.phone << " | " << emp.age << " | " << emp.title << " | " << emp.salary << " | ";
         return osOut;
    }

//    friend istream& operator>>(istream& isIn, const Employee&emp)
//    {
//        isIn >> emp.name;

//    }

    int addAge(int a)
    {
       return age = age + a;
    }
     
    int operator+(int a)
    {
       return age = age + a;
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

    int getAge()
    {
        return age;
    }

    void printEmp()
    {
        cout << name << " | " << phone << " | " << age << " | " << title << " | " << salary << " | ";
        hire.printDate();
    }
};
#endif