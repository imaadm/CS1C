#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include <iostream>

using namespace std;

int main()
{
    Rectangle r1 = Rectangle(9,8);
    Triangle t1 = Triangle(3,4,5);
    
    cout << "Rectangle:" << endl; 
    r1.printPerimeter();
    r1.printArea();
    cout << endl;
    cout << "Triangle:" << endl;
    t1.printPerimeter();
    t1.printArea();

}