#include <iostream>
using namespace std;

int main() {
    char a[100];
    cout << "Enter the argument: ";
    cin.getline(a, 100);
    cout << "Result: something " << a << endl;
    return 0;
}