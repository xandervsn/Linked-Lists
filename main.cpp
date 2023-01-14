/* Xander Siruno-Nebel
   C++/Data Structs, Galbraith
   Jan 13, 2022
   Linked Lists Pt. 1: First part in a linked lists demonstration
 */
#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

int main(){
  Student* student1 = new Student();
  Student* student2 = new Student();

  cout << "Student 1?" << endl;
  cin >> student1 -> getName();
  cout << "Student 2?" << endl;
  cin >> student2 -> getName();
  //needed to set student as input[]
  
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);
  node1 -> setStudent(student1); //1st student set to 1st node
  node1 -> setNext(node2); //1st node linked to 2nd node
  node2 -> setStudent(student2); //2nd student set to 2nd node

  //proof of code working:
  cout << endl << node1 -> getStudent() -> getName() << "->";
  //the first node corresponds to the first student
  cout << node1 -> getNext() -> getStudent() -> getName() << endl;
  //the first node ran through getNext() corresponds to the second
  return 0;
}
