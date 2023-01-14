/* STUDENT.H
   Xander Siruno-Nebel
   C++/Data Sructs, Galbraith
   STUDENT.H
*/
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student{
 public:
  char* getName();
  //returns Name: needed to set student as input[] (char* func())
 private:
  //'local' vars
  char Name[80];
};
#endif
