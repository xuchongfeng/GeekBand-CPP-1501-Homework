#ifndef __CIRCLE__
#define __CIRCLE__

#include "Shape.h"

class Circle: public Shape
{
    private:
        Point center;
        int radius;
        static double PI;
    public:
        Circle(int x, int y, int radius): center(x, y), radius(radius){}
        int getRadius() const { return radius; }
        void setRadius(int radius) {
            this->radius = radius;
        }
        Point getCenter() const { return center; }
        double getArea() const {
            return PI * radius * radius;
        }
};

double Circle::PI = 3.1415926;

#endif /* __CIRCLE__ */
