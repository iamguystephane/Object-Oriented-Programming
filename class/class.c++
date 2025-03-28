
#include <iostream>
using namespace std;

class Human {
    private:
        string name;
        int age;
        float height;
    
    public:
        //default constructor
        Human() {
            this -> name = "John Doe";
            this -> age = 15;
            this -> height = 1.85;
        }

        // parameterized constructor
        Human(string name, int age, float height) {
            this -> name = name;
            this -> age = age;
            this -> height = height;
        }

        //name getter
        string getName() {
            return this -> name;
        }

        //name setter
        void setName(string newName) {
            this -> name = newName;
        }

        // destructor
        ~Human() {
            cout << "The object " << this -> name << " is being destroyed." << endl;
        }

        void talk() {
            cout << "The object " << this -> name << " is talking." << endl;
        }

        void walk() {
            cout << "The object " << this -> name << " is walking. " << endl;
        }
};


int main() {

    // instantiating the class, Human (creating an object of the class Human).
    // to create an object, the general format is:
    // datatype of the object (usually the class' name) name of the object = new class constructor() (either default or parametized)

    Human h1 = Human();
    h1.talk();
    h1.walk();
    cout << "Your name is: " << h1.getName() << endl;
    h1.setName("Mary Johnson");
    cout << "Your new name is: " << h1.getName() << endl;


    //todo: create an object using pointers, using the parameterized constuctor, and demonstrate the calling of all the methods found in the Human class
    return 0;
}