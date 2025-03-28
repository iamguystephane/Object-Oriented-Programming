

#include <iostream>
using namespace std;

class Human
{
    // data members
private:
    string name;
    int age;
    float height;
    string gender;

    // constructors: A constructor is a special function that has no return type, and takes the name of the class, which is used to create objects.

public:
    // default constructor
    Human()
    {
        this->name = "John Doe";
        this->age = 30;
        this->height = 1.75;
        this->gender = "Male";
    }

    // parameterized constructor

    Human(string name, int age, float height, string gender)
    {
        this->name = name;
        this->age = age;
        this->height = height;
        this->gender = gender;
    }

    // destructor
    ~Human()
    {
        cout << this->name << " object has been destroyed" << endl;
    }

    // getters
    string getName()
    {
        return this->name;
    }

    // setter
    void setName(string name)
    {
        this->name = name;
    }
    // function members
    void talk()
    {
        cout << "Hello, my name is " << this->name << endl;
    }
    void eat()
    {
        cout << "I am eating." << endl;
    }
};

int main()
{

    // object instantiation using the default constructor
    Human objDef = Human();

    // object instantiation using the parameterized constructor
    Human objParam = Human("Guy Stephane", 12, 1.85, "Male");

    // exercise: Create a new object, with name Ludovick, age 15, height 2.2, gender Male and then use that object to call the talk() and eat() methods
    Human human1 = Human("Ludovick", 15, 2.2, "Male");
    human1.talk();
    human1.eat();

    // calling function members using objParam
    objParam.talk();
    objParam.eat();

    // calling function members using objDef
    objDef.talk();
    objDef.eat();

    // calling getters and setters

    objDef.setName("Peter Parker");
    string newName = objDef.getName();
    cout << "Old name: John Doe. New name: " << newName << endl;
    return 0;
}