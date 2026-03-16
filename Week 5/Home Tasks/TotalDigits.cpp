#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) n = -n;
    if (n == 0) {
        cout << "Total number of digits: 1" << endl;
        return 0;
    }

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << "Total number of digits: " << count << endl;
    return 0;
}