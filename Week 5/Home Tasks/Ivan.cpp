#include <iostream>
using namespace std;

int main() {
    double money;
    int year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;

    double totalSpent = 0;

    for (int y = 1800; y <= year; y++) {
        if (y % 2 == 0) {
            totalSpent += 12000; // even year
        } else {
            totalSpent += 12000 + 50 * (y - 1800 + 18); // odd year: 12000 + 50 * age
        }
    }

    double diff = money - totalSpent;
    if (diff >= 0) {
        cout << "Yes! He will live a carefree life and will have " << fixed;
        cout.precision(2);
        cout << diff << " dollars left." << endl;
    } else {
        cout << "He will need " << fixed;
        cout.precision(2);
        cout << -diff << " dollars to survive." << endl;
    }

    return 0;
}