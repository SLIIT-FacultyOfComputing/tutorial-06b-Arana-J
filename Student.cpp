#include "stu.h"
#include <iostream>
using namespace std;
// Assign studentId and name
void Student::addignDetails() {
  cout << "Enter Student ID Number : ";
  cin >> studentId;
  cout << "Enter Student Name : ";
  cin >> name;
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID is : " << studentId;
  cout << "Student Nmae is : " << name;
}
