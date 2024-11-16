#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << num << " is positive and even." << endl;
        } else {
            cout << num << " is positive but not even." << endl;
        }
    } else {
        cout << num << " is not positive." << endl;
    }

    return 0;
}
