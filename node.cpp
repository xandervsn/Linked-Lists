#include <iostream>
#include "student.h"
#include "node.h"

using namespace std;

Node::Node(Student* studentNew){
  student = studentNew;
  next = NULL;
}

Node::~Node(){
  delete student;
  next = NULL;
}

void Node::setStudent(Student* studentNew){

}

Student* Node::getStudent(){
  return student;
}

void Node::setNext(Node* node){

}

Node* Node::getNext(){
  return next;
}
