#include "School.h"

float School::calcPopGPA() {
// Traverse array and calculate GPA
float sum = 0.0;

 for(int i = 0; i < popCount;i++) {
  sum += sArray[i].getGPA();

 float avg = sum / popCount;
 
 return avg;
 }
}
