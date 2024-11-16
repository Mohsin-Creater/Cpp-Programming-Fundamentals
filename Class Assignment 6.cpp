#include <iostream>
using namespace std;

int main() {
    int num1, num2, Max_Num;

    cout << "Enter two numbers: " <<endl;
    cin >> num1 >> num2;
 if (num1 > num2) {
        Max_Num = num1;
    } else {
        Max_Num = num2;
    }
    cout << "The maximum number is: " << Max_Num << endl;

    return 0;
}
