#include <iostream>
using namespace std;

int main() {
    char s[100], result[100];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(s, 100);
    for (int i = 0; s[i] != '\0'; i++) {
        char l = s[i] | 32; // lowercase trick
        if (l!='a' && l!='e' && l!='i' && l!='o' && l!='u')
            result[j++] = s[i];
    }
    result[j] = '\0';
    cout << "String with vowels removed: " << result << endl;
    return 0;
}