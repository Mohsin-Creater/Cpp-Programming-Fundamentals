#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is uppercase" << endl;
    } else {
        if (ch >= 'a' && ch <= 'z') {
            cout << ch << " is lowercase" << endl;
        } else {
            cout << "Invalid character" << endl;
        }
    }

    return 0;
}
