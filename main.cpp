#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

int main(){
  Student* student1 = new Student();
  Student* student2 = new Student();
  
  cout << "Student 1?" << endl;
  cin.get(student1 -> getName(), 80);
  cin.get();
  cout << "Student 2?" << endl;
  cin.get(student2 -> getName(), 80);
  cin.get();

  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);
  node1 -> setStudent(student1);
  node1 -> setNext(node2);
  node2 -> setStudent(student2);
 

  return 0;
}
