#ifndef _TRIANGLEH_
#define _TRIANGLEH_
#include "shape.h"
using namespace std;

class Triangle : public Shape
{

  private:
    int x;
    int y;
    int z;

  public:
  
    int calcPerimeter()
    {
        return (x + y + z);
    }

    int calcArea()
    {
        return (0.5 * x * y);
    }

    Triangle()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    Triangle(int b, int h, int hy)
    {
        x = b;
        y = h;
        z = hy;
    }
};
#endif