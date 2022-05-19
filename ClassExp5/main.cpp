#include <iostream>
using namespace std;
#include "Student.h"
#include "School.h"


int main() {
 Student s;
 // Test with invalid id
 s.setId(10000000);
 // Test with valid id
 s.setId(702000000);
 // Test with first name
 s.setFirstName("James");
 cout<<s.getFirstName()<<endl;
 // Test with last name
 s.setLastName("Baxter");
 cout<<s.getLastName()<<endl;
// Test with age
 s.setAge(20);
 cout<<"Age is: "<<s.getAge()<<endl;
 School hofst;
// Test with GPA
 s.setGPA(3.9);
 


 const int numOfStudents = 10;
 for (int i = 0; i < numOfStudents; i++) {
  Student s;
  hofst.addStudent(s);
  s.setId(700000000 + i);
  s.setGPA(i % 5);
  s.setAge(0 + i);
}


// Calculate GPA and Display

 cout<<"Hofstra gpa is: "<<hofst.calcPopGPA()<<endl;

 return 0;
}
