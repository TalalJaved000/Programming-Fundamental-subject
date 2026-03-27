#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter number: ";
        cin >> num;

        bool already = false;
        for (int j = 0; j < size; j++) {
            if (arr[j] == num) {
                already = true;
                break;
            }
        }

        if (already) {
            cout << "Already Entered: " << num << endl;
        } else {
            arr[size] = num;
            size++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}