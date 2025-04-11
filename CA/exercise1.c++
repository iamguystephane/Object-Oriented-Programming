#include <iostream>

using namespace std;

class bankAccount {
    private:
    string name;
    string accNumber;
    float balance = 0.0;

    public:
    bankAccount(string name, string accNumber) {
        this->name = name;
        this->accNumber = accNumber;
    }
    void deposit(float amount) {
        this->balance = this->balance + amount;
        cout << amount << " deposited" << endl;
    }
    void withdraw(float amount) {
        if(this->balance < amount) {
            cout << "Insufficient balance" << endl;
        } else {
            this->balance = this->balance - amount; 
            cout << amount << " withdrawn" << endl;
        }
    }
    void display() {
        cout << "Your current balance is: " << this->balance << endl;
    }
};

int askUserChoice() {
    int choice;
    cout << "Please select an option." << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Display account balance" << endl;
    cout << "0. exit" << endl;
    cout << "Make your choice: ";
    cin >> choice;

    return choice;
}


int main() {
    bankAccount *acc = new bankAccount("NFC", "512511230900231232198");
    int choice;
    choice = askUserChoice();
    while(choice == 1 || choice ==2 || choice == 3 || choice == 0) {
        switch(choice) {
            case 1:
                cout << "Enter the amount to be deposited: ";
                float depositAmt;
                cin >> depositAmt;
                acc->deposit(depositAmt);
                choice = askUserChoice();
                break;
            case 2:
                cout << "Enter the amount to be withdrawn: ";
                float withdrawAmt;
                cin >> withdrawAmt;
                acc->withdraw(withdrawAmt);
                choice = askUserChoice();
                break;
            case 3:
                acc->display();
                choice = askUserChoice();
                break;
            case 0:
                cout << "Exiting..." << endl;
                choice = 4;
                break;
            default:
                cout << "Invalid input. Stopping program" << endl;
                choice = NULL;
                break;
        }
    }
    return 0;
}