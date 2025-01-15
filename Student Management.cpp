#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 10;

struct Student {
    int id;
    string name;
    string department;
};

Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents < MAX_STUDENTS) {
        cout << "Enter student ID: ";
        cin >> students[numStudents].id;

        cout << "Enter student name (one word): ";
        cin >> students[numStudents].name;

        cout << "Enter student department (one word): ";
        cin >> students[numStudents].department;

        numStudents++;
        cout << "Student added!\n";
    } else {
        cout << "Too many students!\n";
    }
}

void displayStudents() {
    if (numStudents == 0) {
        cout << "No students yet.\n";
        return;
    }
    cout << "\n--- Students ---\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "ID: " << students[i].id
             << ", Name: " << students[i].name
             << ", Dept: " << students[i].department << "\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nStudent Manager\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n'); // A large number to clear the buffer
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 0: cout << "Bye!\n"; break;
            default: cout << "Bad input!\n";
        }
    } while (choice != 0);
    return 0;
}