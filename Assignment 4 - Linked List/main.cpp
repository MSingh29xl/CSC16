#include <iostream>
using namespace std;
#include "List.h"

int main(){
  // Create a list
  List ml;
  // Insert elements to the list
 const int N = 10;
  for(int i = 0; i < N; i++){
  ml.insert(i);
  }
  // Display the list
  ml.display(cout);
 // End of first test
 cout<<"------"<<endl;
  // Test 2: Use insert by pos
 List ml2;
 for(int i = 0; i < N; i++){
  ml2.insert(i, i);
 }
 // Display the list
 ml2.display(cout);
 cout<<"------"<<endl;
 // Test 3
 ml2.insert(10, 0);
 cout<<"------"<<endl;
 ml2.display(cout);
 // Test 4: Delete by pos
 for(int i = 0; i < N/2; i++){
  cout<<"deleteByPos: "<<i<<endl;
  ml2.deleteByPos(i);
  ml2.display(cout);
 }
 cout<<"------"<<endl;
 // Test 5: Insert at end
 cout<<"Value to attach: "<<N<<endl;
 ml2.insertAtEnd(N);
 ml2.display(cout);
 cout<<"------"<<endl;
 // Test 6: Delete by value
 cout<<"Value to delete: "<<N<<endl;
 ml2.deleteByValue(N);
 ml2.display(cout);
 return 0;
}


