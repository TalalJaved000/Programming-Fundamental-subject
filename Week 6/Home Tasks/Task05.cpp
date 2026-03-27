#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of customers: ";
    cin >> n;

    string names[100];

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    char ch;
    cout << "Enter a letter to check: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (names[i][0] == ch) {
            count++;
        }
    }

    cout << "Total names starting with '" << ch << "': " << count;

    return 0;
}