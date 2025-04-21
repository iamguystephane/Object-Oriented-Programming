


#include<iostream>
using namespace std;


class Shape {
    public:
    virtual float getArea(){}
};

class Rectangle : public Shape{
    private:
    float width;
    float height;

    public:
    Rectangle() {
        this->width = 10.2;
        this->height = 2.5;
    }
    Rectangle(float w, float h) {
        this->width = w;
        this->height = h;
    }
    float getArea() {
        return this->width * this->height;      // this shows polymorphism through method overriding.
    }
};

class Circle : public Shape {
    private:
    float radius;
    
    public:
    Circle(float r) {
        this->radius = r;
    }
    float getArea() {
        return 3.14 * this->radius * this->radius;      // method overriding.
    }
};

int main() {

    Rectangle *r1 = new Rectangle(15.5, 8.7);
    Circle *c1 = new Circle(5);

    cout << "The area of the rectangle is: " << r1->getArea() << endl;
    cout << "The area of the circle is: " << c1->getArea() << endl;

    return 0;
}