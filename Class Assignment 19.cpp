#include <iostream>
using namespace std;

int main() {
    string username, password;
    int securityLevel;

    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your security level: ";
    cin >> securityLevel;

    if (username == "admin" && password == "secret") {
        if (securityLevel >= 3) {
            cout << "Access granted." << endl;
        } else {
            cout << "Insufficient security level." << endl;
        }
    } else {
        cout << "Invalid credentials." << endl;
    }

    return 0;
}
