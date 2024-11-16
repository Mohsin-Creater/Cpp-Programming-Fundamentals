#include <iostream>
using namespace std;
int main() {
    float float_value;
    cout << "Enter a float value: ";
    cin >> float_value;
 // Converting float to int
    int int_value = (int)float_value;
    cout << "After converting to int: " << int_value << endl;
 // ASCII conversion
    char char_value = 'A' + 5;
    cout << "Character 'A' + 5 = " << char_value << " (ASCII Value: " << (int)char_value << ")" << endl;
    return 0;
}

