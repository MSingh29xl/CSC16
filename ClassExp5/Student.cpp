#include <iostream>
#include "Student.h"
using namespace std;

void Student::setId(int id) {
 if(id > 700000000) {
  this->id =id;
 }
 else {
  cout<<"Bad ID number: "<<id<<endl;
 }
}

void Student::setFirstName(const char *firstName) {
 for(int i = 0; i < maxNameSize; i++) {
  this->firstName[i] = firstName[i];
    
  if(firstName[i] == 0) {
    // Check for ending of string
    break;
   }

  
 
 }
}

void Student::setLastName(const char* lastName) {
 for(int i = 0; i < maxNameSize; i++) {
 this->lastName[i] = lastName[i];
 
 if(lastName[i] == 0) {
  break;
  }
 } 
}

void Student::setGPA(float gpa) {
 if(gpa >=  0.0 && gpa <= 4.0){
  this->gpa = gpa;
 }
 else {
 cout<<"Bad gpa: "<< gpa<<endl;
 }
}

void Student::setAge(short age) {
 if(age <= 150) {
  this ->age = age; 
 }
 else{
  cout<<"Bad age: "<<age<<endl;
 }
}
