#include <iostream>
using namespace std;

class ATM {
private:
    int pin = 1234;
    double balance = 10000.0;

public:
    void checkPin() {
        int enteredPin;
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            menu();
        } else {
            cout << "Incorrect PIN. Access Denied.\n";
        }
    }

    void menu() {
        int choice;

        do {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    cout << "Current Balance: ₹" << balance << endl;
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    cout << "Thank you for using ATM.\n";
                    break;

                default:
                    cout << "Invalid choice.\n";
            }

        } while(choice != 4);
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else if (amount <= 0) {
            cout << "Invalid amount.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};

int main() {
    ATM user;
    user.checkPin();
    return 0;
}#include <iostream>
using namespace std;

class ATM {
private:
    int pin = 1234;
    double balance = 10000.0;

public:
    void checkPin() {
        int enteredPin;
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            menu();
        } else {
            cout << "Incorrect PIN. Access Denied.\n";
        }
    }

    void menu() {
        int choice;

        do {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    cout << "Current Balance: ₹" << balance << endl;
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    cout << "Thank you for using ATM.\n";
                    break;

                default:
                    cout << "Invalid choice.\n";
            }

        } while(choice != 4);
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else if (amount <= 0) {
            cout << "Invalid amount.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};

int main() {
    ATM user;
    user.checkPin();
    return 0;
}
