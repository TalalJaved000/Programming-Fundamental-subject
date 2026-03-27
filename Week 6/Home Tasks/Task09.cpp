#include <iostream>
using namespace std;

int main() {
    char bookNames[50][50];
    char bookAuthors[50][50];
    int bookCount = 0;
    char borrowedBooks[50][50];
    int borrowCount = 0;
    int choice;

    for (;;) {
        cout << "\n---- Library Management System ----" << endl;
        cout << "\n1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. View Borrowed Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> bookNames[bookCount];
            cout << "Enter book author: ";
            cin >> bookAuthors[bookCount];
            bookCount++;
            cout << "Book added successfully!" << endl;

        } else if (choice == 2) {
            if (bookCount == 0) {
                cout << "No books available." << endl;
            } else {
                cout << "\nAvailable Books:" << endl;
                cout << "----------------" << endl;
                for (int i = 0; i < bookCount; i++) {
                    cout << i+1 << ". " << bookNames[i]
                         << " by " << bookAuthors[i] << endl;
                }
            }

        } else if (choice == 3) {
            if (bookCount == 0) {
                cout << "No books available to borrow." << endl;
            } else {
                cout << "Enter book name to borrow: ";
                char borrow[50];
                cin >> borrow;

                bool found = false;
                for (int i = 0; i < bookCount; i++) {
                    // compare manually
                    bool match = true;
                    for (int k = 0; borrow[k] != '\0' || bookNames[i][k] != '\0'; k++) {
                        if (borrow[k] != bookNames[i][k]) { match = false; break; }
                    }
                    if (match) {
                        int k = 0;
                        while (borrow[k] != '\0') { borrowedBooks[borrowCount][k] = borrow[k]; k++; }
                        borrowedBooks[borrowCount][k] = '\0';
                        borrowCount++;
                        cout << "Book borrowed successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Book not found!" << endl;
            }

        } else if (choice == 4) {
            if (borrowCount == 0) {
                cout << "No borrowed books." << endl;
            } else {
                cout << "\nBorrowed Books:" << endl;
                cout << "---------------" << endl;
                for (int i = 0; i < borrowCount; i++)
                    cout << i+1 << ". " << borrowedBooks[i] << endl;
            }

        } else if (choice == 5) {
            cout << "Exiting..." << endl;
            break;

        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}