#include <iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter an hour (0-24): ";
    cin >> hour;

    switch (hour) {
        case 0 ... 11:
            cout << "Morning" << endl;
            break;
        case 12 ... 16:
            cout << "Afternoon" << endl;
            break;
        case 17 ... 20:
            cout << "Evening" << endl;
            break;
        case 21 ... 23:
            cout << "Night" << endl;
            break;
        default:
            cout << "Invalid hour" << endl;
    }

    return 0;
}
