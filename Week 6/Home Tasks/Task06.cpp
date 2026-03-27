#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    char names[50][50];
    cout << "Enter names of " << n << " students:" << endl;
    for (int i = 0; i < n; i++)
        cin.getline(names[i], 50);
    char temp[50];
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
    
            bool swap = false;
            for (int k = 0; names[j][k] != '\0' || names[j+1][k] != '\0'; k++) {
                if (names[j][k] > names[j+1][k]) { swap = true; break; }
                if (names[j][k] < names[j+1][k]) { break; }
            }
            if (swap) {
        
                int k = 0;
                while (names[j][k] != '\0') { temp[k] = names[j][k]; k++; }
                temp[k] = '\0';
                k = 0;
                while (names[j+1][k] != '\0') { names[j][k] = names[j+1][k]; k++; }
                names[j][k] = '\0';
                k = 0;
                while (temp[k] != '\0') { names[j+1][k] = temp[k]; k++; }
                names[j+1][k] = '\0';
            }
        }
    }

    cout << "Students in alphabetical order:" << endl;
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}