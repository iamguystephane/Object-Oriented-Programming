

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


class Circle : public Shape {
    private:
    float radius;

    public:
    Circle(float r) {
        this->radius = r;
    }
    float getArea() {       // overriding the getArea method.
        return 3.14 * this->radius * this->radius;
    }
};


int main() {

    Circle *c1 = new Circle(7.0);
    Rectangle *r1 = new Rectangle(5.2, 11.5);

    cout << "The area of the circle is: " << c1->getArea() << endl;
    cout << "The area of the rectangle is: " << r1->getArea() << endl;

    return 0;
}