#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int pdtudentid, char pname) {
  studentid = pstudentid;
  strcpy(name, pname);
  
}

// Display StudentId and Name
Student::display() {
  cout <<"student id: "<< student id << endl;
  cout << "name:"<< name << endl;
  
}
