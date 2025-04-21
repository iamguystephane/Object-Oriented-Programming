

#include<iostream>
using namespace std;


class Shape {
    public:
    virtual float getArea() = 0;
};

class Rectangle : public Shape{
    private:
    float length;
    float width;

    public:
    Rectangle(float l, float w) {
        this->length = l;
        this->width = w;
    }
    float getArea() {
        return this->width * this->length;
    }
};




int main() {
    return 0;
}