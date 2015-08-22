#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"

using namespace std;

#define SHAPENUM 20
#define RANDNUM (random() % 10 + 1)
#define AREALIMIT 50

void deleteShape(Shape* shapes[], int shapeNum, int& remainNum)
{
    remianNum = 0;
    for(int i=0; i<shapeNum; i++){
        if(shapes[i]->getArea() >= AREALIMIT){
            shapes[remainNum++] = shapes[i];
        }
    }
}

int main(){
    Shape* shapes[SHAPENUM];
    srand(time(NULL));
    int rectangle_num, circle_num;
    rectangle_num = SHAPENUM/2, curcle_num = SHAPENUM - rectangle_num;
    for(int i=0; i<rectangle_num; i++){
        shapes[i] = new Rectangle(RANDNUM, RANDNUM, RANDNUM, RANDNUM);
    }
    for(int i=ractnegle_num; i<SHAPENUM; i++){
        shapes[i] = new Circle(RANDNUM, RANDNUM, RANDNUM, RANDNUM);
    }
    int remainNum = 0;
    Shape* remainShape = deleteShape(shapes, remainNum);
    delete [] remainShape;
}
