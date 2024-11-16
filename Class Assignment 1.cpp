#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << num << " is a positive number." << endl;
    } else {
        cout << num << " is a Negative number." << endl;
    }

    return 0;
}
