#ifndef _RECTANGLEH_
#define _RECTANGLEH_
#include <iostream>
#include "shape.h"
using namespace std;

class Rectangle : public Shape
{

  private:
    int x;
    int y;

  public:
    int calcPerimeter()
    {
        return (2 * x + 2 * y);
    }
    int calcArea()
    {
        return x * y;
    }

    Rectangle()
    {
        x = 0;
        y = 0;
    }
    Rectangle(int l, int w)
    {
        x = l;
        y = w;
    }
};

#endif