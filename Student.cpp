#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentId, char pname[]) {
  studentId = pstudentId;
  strcpy(name, pname);
  
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id: " << studentId << endl;
  cout << "Name: " << name << endl;
  
}
