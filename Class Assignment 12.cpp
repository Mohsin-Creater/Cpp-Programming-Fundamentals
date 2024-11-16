#include <iostream>
using namespace std;

int main() {
    double income;

    cout << "Enter your annual income: ";
    cin >> income;

    if (income <= 25000) {
        cout << "No tax." << endl;
    } else if (income <= 50000) {
        cout << "Tax bracket: 10%" << endl;
    } else if (income <= 75000) {
        cout << "Tax bracket: 20%" << endl;
    } else {
        cout << "Tax bracket: 30%" << endl;
    }

    return 0;
}
