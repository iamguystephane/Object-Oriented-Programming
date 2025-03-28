

#include <iostream>
using namespace std;

class Triangle {
    private:
        float height;
        float base;
        float area;
    public:
        Triangle(float height, float base) {
            this->height = height;
            this->base = base;
        }
        //friend functions.
        friend void setHeight(Triangle t1, float newHeight);
        friend float getHeight(Triangle t1);

        void setBase(float base) {
            this->base = base;
        }
        void calculateArea() {
            this->area = 0.5 * this->base * this->height;
        }
        void printArea() {
            cout << "The area of the triangle is: " << this->area << endl;
        }
};

void setHeight(Triangle t1, float newHeight) {
    t1.height = newHeight;
}
float getHeight(Triangle t1) {
    return t1.height;
}


int main() {

    Triangle *t1 = new Triangle(22.5, 10.23);
    t1->calculateArea();
    t1->printArea();
    t1->setBase(5.4);
    setHeight(*t1, 2.5);
    cout << "The new area is: " << endl;
    t1->calculateArea();
    t1->printArea();
    return 0;
}

