#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    cin.ignore();

    char productNames[50][50];
    double prices[50];
    int quantity[50];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of product " << i+1 << ": ";
        cin.getline(productNames[i], 50);
        cout << "Enter price of " << productNames[i] << ": $";
        cin >> prices[i];
        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantity[i];
        cin.ignore();
    }

    cout << "\nProduct Inventory Report" << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < n; i++) {
        double total = prices[i] * quantity[i];
        cout << productNames[i] << ": $" << prices[i]
             << ", " << quantity[i] << " in stock"
             << ", Total value: $" << total << endl;
    }

    return 0;
}