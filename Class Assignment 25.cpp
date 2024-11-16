#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Appetizers\n";
        cout << "2. Main Courses\n";
        cout << "3. Desserts\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int appetizerChoice;
                cout << "\nAppetizers Menu:\n";
                cout << "1. Classic Nachos\n";
                cout << "2. Garlic Bread\n";
                cout << "3. Bruschetta\n";
                cout << "Enter your choice: ";
                cin >> appetizerChoice;

                break;
            }
            case 2: {
                int mainCourseChoice;
                cout << "\nMain Courses Menu:\n";
                cout << "1. Pasta\n";
                cout << "2. Pizza\n";
                cout << "3. Burgers\n";
                cout << "Enter your choice: ";
                cin >> mainCourseChoice;

                break;
            }
            case 3: {
                int dessertChoice;
                cout << "\nDesserts Menu:\n";
                cout << "1. Chocolate Lava Cake\n";
                cout << "2. Cheesecake\n";
                cout << "3. Ice Cream\n";
                cout << "Enter your choice: ";
                cin >> dessertChoice;

                break;
            }
            case 4:
                cout << "Exiting...\n";
                break;
                
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
