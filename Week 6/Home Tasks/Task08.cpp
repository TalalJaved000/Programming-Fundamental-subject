#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    int flightNumber[50];
    char destination[50][50];
    int seatsAvailable[50];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter flight number for flight " << i+1 << ": ";
        cin >> flightNumber[i];
        cout << "Enter destination for flight " << flightNumber[i] << ": ";
        cin >> destination[i];
        cout << "Enter seats available for flight " << flightNumber[i] << ": ";
        cin >> seatsAvailable[i];
    }

    cout << "\nFlight Information:" << endl;
    cout << "------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Flight " << flightNumber[i] << " to " << destination[i]
             << " has " << seatsAvailable[i] << " seats available." << endl;
    }

    cout << "\nFlights with less than 5 seats available:" << endl;
    cout << "------------------------------------------" << endl;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (seatsAvailable[i] < 5) {
            cout << "Flight " << flightNumber[i] << " to " << destination[i]
                 << " has only " << seatsAvailable[i] << " seats left!" << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No flights with less than 5 seats available." << endl;

    return 0;
}