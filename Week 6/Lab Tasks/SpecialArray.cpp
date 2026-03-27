#include <iostream>
using namespace std;

bool isSpecialArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0) return false;
        if (i % 2 != 0 && arr[i] % 2 == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (isSpecialArray(arr, n))
        cout << "The array is special" << endl;
    else
        cout << "The array is not special" << endl;
    return 0;
}