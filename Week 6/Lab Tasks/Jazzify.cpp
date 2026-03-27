#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;
    cin.ignore();
    char chords[50][50];
    cout << "Enter " << n << " chords:" << endl;
    for (int i = 0; i < n; i++)
        cin.getline(chords[i], 50);

    cout << "Jazzified chords: [";
    for (int i = 0; i < n; i++) {
        int len = 0;
        while (chords[i][len] != '\0') len++;
        if (chords[i][len-1] != '7') {
            chords[i][len] = '7';
            chords[i][len+1] = '\0';
        }
        cout << chords[i];
        if (i < n-1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}