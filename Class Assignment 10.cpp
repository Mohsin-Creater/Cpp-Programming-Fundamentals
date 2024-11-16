#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 65) {
        cout << "You are eligible for a senior citizen discount." << endl;
    } else {
        cout << "You are not eligible for a senior citizen discount." << endl;
    }

    return 0;
}
