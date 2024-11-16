#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        if (num % 3 == 0) {
            cout << num << " is divisible by both 2 and 3." << endl;
        } else {
            cout << num << " is divisible by 2 but not by 3." << endl;
        }
    } else {
        cout << num << " is not divisible by 2." << endl;
    }

    return 0;
}
