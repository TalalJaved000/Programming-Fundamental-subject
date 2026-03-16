#include <iostream>
using namespace std;

int main() {
    int n, x, p;
    cout << "Enter Lilly's age: ";
    cin >> n;
    cout << "Enter the price of the washing machine: ";
    cin >> x;
    cout << "Enter the unit price of each toy: ";
    cin >> p;

    double savedMoney = 0;
    int toys = 0;
    int evenCount = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            savedMoney += (i / 2) * 10.0;
            evenCount++;
        } else {
            toys++;
        }
    }

    savedMoney -= evenCount; // brother steals 1 from each even birthday
    savedMoney += toys * p;  // sell all toys

    double diff = savedMoney - x;
    if (diff >= 0) {
        cout << "Yes!" << endl;
        cout << diff << endl;
    } else {
        cout << "No!" << endl;
        cout << -diff << endl;
    }

    return 0;
}