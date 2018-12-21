#include <iostream>
#include "math.h"

class Construct {
    int* x;
    float* y;

public:
    int getX() const {
        return *x;
    }

    void setX(int *x) {
        Construct::x = x;
    }

    float getY() const {
        return *y;
    }

    void setY(float *y) {
        Construct::y = y;
    }

    Construct(int _x, float _y){
        x = new int;
        y = new float;
        *x=_x;
        *y=_y;
        std::cout<<_x<<'\n';
        std::cout<<_y<<'\n';
        std::cout << "Конструктор\n";
    }

    ~Construct(){
        delete x;
        delete y;
        std::cout << "Деструктор\n";
    }

    void change (){
        *y=pow(*x,2);
        while (*y>1){
            *y=*y/10;
        }
        *y=*y+*x;
    }
};

    bool more (Construct* a,Construct* b){
        return a->getX()==b->getX();
    }

int main() {
    Construct a(21,5);
    Construct b(5,6);
    a.change();
    std::cout<<more(&a,&b)<<'\n';
    std::cout<<a.getX()<<'\n';
    std::cout<<a.getY()<<'\n';
    return 0;
}