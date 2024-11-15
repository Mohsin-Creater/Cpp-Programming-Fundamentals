<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    double Subject1, Subject2, Subject3, Subject4;
    double max_marks = 100;

    cout << "------------------------------------- \n";
    cout << "Student Grade Management System" << endl;
    cout << "------------------------------------- \n";
    cout << "Enter marks for Subject 1 : ";
    cin >> Subject1;
    cout << "Enter marks for Subject 2 : ";
    cin >> Subject2;
    cout << "Enter marks for Subject 3 : ";
    cin >> Subject3;
    cout << "Enter marks for Subject 4 : ";
    cin >> Subject4;

    double Total_marks = Subject1 + Subject2 + Subject3 + Subject4;
    double percentage = Total_marks / (4 * max_marks) * 100;
    string grade;

    // Assigning grade based on percentage
    
    if (percentage >= 90) {
        grade = "A";
    } else if (percentage >= 80) {
        grade = "A";
    } else if (percentage >= 70) {
        grade = "B";
    } else if (percentage >= 60) {
        grade = "C";
    } else if (percentage >= 50) {
        grade = "D";
    } else {
        grade = "E";
    }

    cout << "------------------------------------- \n";
    cout << "\nFinal Result" << endl;  
    cout << "------------------------------------- \n";

    cout << "Total Marks : " << Total_marks << " / 400" << endl;  
    cout << "Percentage: " << percentage << " % " << endl;  
    cout << "Grade: " << grade << endl;  

    // Check if the student passed or failed each subject
    if (Subject1 >= 33 && Subject2 >= 33 && Subject3 >= 33 && Subject4 >= 33) {
        cout << "Status: Pass" << endl;
    } else {
        cout << "Status: Fail" << endl;
    }

    return 0;
}

=======
#include <iostream>
using namespace std;

int main()
{
    double Subject1, Subject2, Subject3, Subject4;
    double max_marks = 100;

    cout << "------------------------------------- \n";
    cout << "Student Grade Management System" << endl;
    cout << "------------------------------------- \n";
    cout << "Enter marks for Subject 1 : ";
    cin >> Subject1;
    cout << "Enter marks for Subject 2 : ";
    cin >> Subject2;
    cout << "Enter marks for Subject 3 : ";
    cin >> Subject3;
    cout << "Enter marks for Subject 4 : ";
    cin >> Subject4;

    double Total_marks = Subject1 + Subject2 + Subject3 + Subject4;
    double percentage = Total_marks / (4 * max_marks) * 100;
    string grade;

    // Assigning grade based on percentage
    
    if (percentage >= 90) {
        grade = "A";
    } else if (percentage >= 80) {
        grade = "A";
    } else if (percentage >= 70) {
        grade = "B";
    } else if (percentage >= 60) {
        grade = "C";
    } else if (percentage >= 50) {
        grade = "D";
    } else {
        grade = "E";
    }

    cout << "------------------------------------- \n";
    cout << "\nFinal Result" << endl;  
    cout << "------------------------------------- \n";

    cout << "Total Marks : " << Total_marks << " / 400" << endl;  
    cout << "Percentage: " << percentage << " % " << endl;  
    cout << "Grade: " << grade << endl;  

    // Check if the student passed or failed each subject
    if (Subject1 >= 33 && Subject2 >= 33 && Subject3 >= 33 && Subject4 >= 33) {
        cout << "Status: Pass" << endl;
    } else {
        cout << "Status: Fail" << endl;
    }

    return 0;
}

>>>>>>> 51385164744a9ebe807f05636c52ab9693369f57
