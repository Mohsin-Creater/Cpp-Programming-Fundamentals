#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Excellent" << endl;
    } else if (score >= 80) {
        cout << "Very Good" << endl;
    } else if (score >= 70) {
        cout << "Good" << endl;
    } else if (score >= 60) {
        cout << "Satisfactory" << endl;
    } else {
        cout << "Needs Improvement" << endl;
    }

    return 0;
}
