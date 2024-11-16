#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income: ";
    cin >> income;

    if (age >= 18) {
        if (income >= 30000) {
            cout << "You are eligible for a loan." << endl;
        } else {
            cout << "Your income is too low for a loan." << endl;
        }
    } else {
        cout << "You are too young for a loan." << endl;
    }

    return 0;
}
