#ifndef __POINT__
#define __POINT__

class Point
{
    private:
        int x;
        int y;
    private:
        Point(int x = 0, int y = 0){
            this->x = x;
            this->y = y;
        }
        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }
        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            this->y = y;
        }
};

#endif /* __POINT__ */
