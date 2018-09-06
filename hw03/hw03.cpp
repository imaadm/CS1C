#include <string>
#include <iostream>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "software.h"

int main ()
{
    Architect arch1;
    Programmer prog1;
    Employee emp1;

    Architect Sania = Architect(4,"Bossman", 5, 7, "Sania", 32968, "859-310-4683", 25, "Software Design", "$101,000", 2017,10,30);
    Programmer Imaad = Programmer(3,"Bosser", 9, true, true, "Imaad", 19927, "958-196-4721", 35, "Developer", "$104,000", 2019,6,11);
    Employee Joe = Employee("Joe", 11111, "374-958-4050", 45, "Average", "$70,000", 1993, 3, 24);

    cout << "Defaults: " << endl;
    cout << "Name  | Employee ID | Phone Number |  Age  |  Title  |  Salary  | Date Hired " << endl;
    cout << endl;
    arch1.printArch();
    cout << endl;
    prog1.printProg();
    emp1.printEmp();

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Name  | Employee ID | Phone Number |  Age  |  Title  |  Salary  | Date Hired " << endl;
    cout << endl;
    Sania.printArch();
    cout << endl;
    Imaad.printProg();
    Joe.printEmp();

    Sania.editAge(21);
    Imaad.editName("Daami");
    Joe.editSalary("$75,000");
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Edited:" << endl;
    cout << "Name  | Employee ID | Phone Number |  Age  |  Title  |  Salary  | Date Hired " << endl;
    cout << endl;
    Sania.printArch();
    cout << endl;
    Imaad.printProg();
    Joe.printEmp();




}