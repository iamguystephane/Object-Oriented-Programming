

#include <iostream>
using namespace std;

class Vehicle {
    private:
    string brand;
    int year;

    public:
    Vehicle(string b, int y) {
        this->brand = b;
        this->year = y;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
    void setBrand(string b) {
        this->brand = b;
    }
    void setYear(int y) {
        this->year = y;
    }
    string getBrand() {
        return this->brand;
    }
    int getYear() {
        return this->year;
    }
};

class Car : public Vehicle {
    private:
    int numDoors;

    public:
    Car(string b, int y, int n) : Vehicle(b, y) {
        this->numDoors = n;
    }
    void display() {
        Vehicle::display();
        cout << "Number of doors: " << numDoors << endl;
    }
};

class Bike : public Vehicle{
    private:
    bool hasGear;
    
    public:
    Bike(string b, int y, bool g) : Vehicle(b, y) {
        this->hasGear = g;
    }
    void display() {
        Vehicle::display();
        cout << "Has gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

int main() {

    Car *car1 = new Car("Toyota", 2020, 4);
    Bike *bike1 = new Bike("Yamaha", 2019, true);
    
    cout << "Before updating:" << endl;
    car1->display();
    bike1->display();
    
    car1->setBrand("Honda");
    car1->setYear(2021);

    bike1->setBrand("Suzuki");
    bike1->setYear(2022);

    cout << "After updating:" << endl;
    car1->display();
    bike1->display();
    return 0;
}