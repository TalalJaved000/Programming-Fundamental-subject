#include <iostream>
using namespace std;

int main() {
    int pin, correctPin = 1234;
    int balance = 1000;
    int choice, amount;
    bool login = false;

    // 3 attempts using for loop
    for (int i = 1; i <= 3; i++) {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if (pin == correctPin) {
            cout << "Login Successful\n";
            login = true;
            break;
        } 
        else {
            cout << "Wrong PIN\n";
        }
    }

    if (!login) {
        cout << "Too many attempts. Card Blocked.\n";
        return 0;
    }

    // ATM Menu
    do {
        cout << "\n------ ATM MENU ------\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Current Balance: " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Money Deposited Successfully\n";
        }
        else if (choice == 3) {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if (amount <= balance && amount > 0) {
                balance -= amount;
                cout << "Please collect your cash\n";
            } 
            else {
                cout << "Insufficient Balance\n";
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using ATM\n";
        }
        else {
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}