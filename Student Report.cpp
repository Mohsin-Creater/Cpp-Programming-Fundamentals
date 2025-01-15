#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int rollNumber;
  int marks[3];
};

int calculateTotalMarks(Student student); 

Student addStudent() { 
  Student student; 

  cout << "Enter Name: ";
  cin >> student.name;

  cout << "Enter Roll Number: ";
  cin >> student.rollNumber;

  cout << "Enter Marks for 3 subjects: ";
  for (int i = 0; i < 3; i++) {
    cin >> student.marks[i];
  }

  return student; 
}

void displayStudent(Student student) {
  cout << "Student Details:" << endl;
  cout << "Name: " << student.name << endl;
  cout << "Roll Number: " << student.rollNumber << endl;
  cout << "Marks: ";
  for (int i = 0; i < 3; i++) {
    cout << student.marks[i] << " ";
  }
  cout << endl;
  cout << "Total Marks: " << calculateTotalMarks(student) << endl;
}

int calculateTotalMarks(Student student) {
  int total = 0;
  for (int i = 0; i < 3; i++) {
    total += student.marks[i];
  }
  return total;
}

int main() {
  Student student = addStudent();

  cout << "Student details added successfully!" << endl;

  displayStudent(student); 

  return 0;
}