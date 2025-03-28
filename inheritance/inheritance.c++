

#include<iostream>
using namespace std;

class Human {
    private:
    string name;
    int age;
    float height;
    char gender;

    public:
    Human(string name, int age, float height, char gender) {
        this->name = name;
        this->age = age;
        this->height = height;
        this->gender = gender;
    }

    string getName() {
        return this->name;
    }
    void talk() {
        cout << this->name << " is talking" << endl;
    }
    void eat() {
        cout << this->name << " is eating" << endl;
    }

    ~Human();
};

class Boy : public Human {
    private:
    bool hasBeard;
    
    public:
    Boy(string name, int age, float height, char gender, bool hasBeard) : Human(name, age, height, gender) {
        this->hasBeard = hasBeard;
    }
    void growBeard() {
        cout << this->getName() << " is growing his beard" << endl;
    }
};

class Girl : public Human {
    private:
    bool isPregnant;
    bool hasMakeup;

    public:
    Girl(string name, int age, float height, char gender, bool isPregnant, bool hasMakeup) : Human(name, age, height, gender) {
        this->isPregnant = isPregnant;
        this->hasMakeup = hasMakeup;
    }

    void putToBirth() {
        cout << this->getName() << " is putting to birth!" << endl;
    }
    void makeUp() {
        cout << this->getName() << " is putting on some makeup" << endl;
    }
};

int main() {
    Boy *boy1 = new Boy("Guy Stephane", 12, 1.85, 'M', false);
    Girl *girl1 = new Girl("Ngum Amanda", 10, 1.60, 'F', false, true);

    boy1->eat();
    boy1->talk();
    boy1->growBeard();


    girl1->makeUp();
    girl1->putToBirth();

    delete boy1;
    delete girl1;
    return 0;
}