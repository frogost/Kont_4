#include <iostream>

class Construct {
    int* x;
    float* y;

public:
    int *getX() const {
        return x;
    }

    void setX(int *x) {
        Construct::x = x;
    }

    float *getY() const {
        return y;
    }

    void setY(float *y) {
        Construct::y = y;
    }

    Construct(int _x, float _y){
        x = new int;
        y = new float;
        *x=_x;
        *y=_y;
        std::cout<<*x<<'\n';
        std::cout<<*y<<'\n';
        std::cout << "Конструктор\n";
    }

    ~Construct(){
        delete x;
        delete y;
        std::cout << "Деструктор\n";
    }

};

int main() {
    Construct a(4,5);
    std::cout<<a.getX()<<'\n';
    std::cout<<a.getY()<<'\n';
    return 0;
}