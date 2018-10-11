#ifndef _SHAPEH_
#define _SHAPEH_

#include <iostream>

using namespace std;

class Shape
{

  private:
    int x;
    int y;

  public:
    virtual int calcPerimeter() = 0;
    virtual int calcArea() = 0;
    
    void printPerimeter()
    {
        cout << "Perimeter: " << calcPerimeter() << endl;
    }

    void printArea()
    {
        cout << "Area: " << calcArea() << endl;
    }

    Shape()
    {
        x = 0;
        y = 0;
    }

    Shape(int l, int w)
    {
        x = l;
        y = w;
    }
};

#endif