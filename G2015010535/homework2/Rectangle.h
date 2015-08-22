#ifndef __RECTANGLE__
#define __RECTANGLE__

#include "Shape.h"
#include "Point.h"

class Rectangle: public Shape
{
    private:
        int width;
        int height;
        Point leftup;
    public:
        Rectangle(int width = 0, int height = 0, int x = 0, int y = 0): \
                width(width), height(height), leftup(x, y){
        }
        int getWidth() const {
            return width;
        }
        int getHeight() const {
            return height;
        }
        void setWidth(int width) {
            this->width = width;
        }
        void setHeight(int height) {
            this->height = height;
        }
        int getArea() const {
            return width * height;
        }
};

#endif /* __RECTANGLE__ */

