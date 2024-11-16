#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter the student's grade: ";
    cin >> grade;

    if (grade >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
