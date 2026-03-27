#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of resistors: ";
    cin >> n;

    float arr[100];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter resistance: ";
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Total resistance: " << sum << " ohms";

    return 0;
}