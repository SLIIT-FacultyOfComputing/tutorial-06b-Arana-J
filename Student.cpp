#include "Student.h"
#include <string.h>
#include <iostream>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int id, char name[20]) {
 studentId=id;
 strcpy(sname,name);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID is : " << studentId;
  cout << "Student Nmae is : " << sname;
}
