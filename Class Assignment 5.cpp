#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 100) {
        cout << number << " is greater than 100." << endl;
    } else {
        cout << number << " is not greater than 100." << endl;
    }

    return 0;
}
