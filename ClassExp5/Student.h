
#ifndef STUDENT_H
#define STUDENT_H

const int maxNameSize = 32;

class Student {

public:

 void setId(int id);
 int getId() {
 return id;
 }

 void setFirstName(const char *firstName);
 const char* getFirstName() {
 return firstName;
 }

 void setLastName(const char *lastName);
 const char* getLastName() {
 return lastName;
 }
 
 void setGPA(float gpa); 
 float getGPA() {
 return gpa;
 }

 void setAge(short gpa);
 short getAge() { 
 return age;
}


private:
 int id;
 char lastName[maxNameSize];
 char firstName[maxNameSize];
 float gpa;
 short age;
};

#endif //STUDENT_H
