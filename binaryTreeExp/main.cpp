#include <iostream>
#include <cstdlib>
using namespace std;
#include "BinaryTree.h"

int main()
{
  // seed random num generator
  // initialize random seed: 
  srand (time(NULL));

  // create a tree using a loop
  BinaryTree bt;
  const int N = 10;
  for(int i=0;i<N;i++)
  {
     int rndNum = rand()%100;
     cout<<rndNum<<endl;
     bt.insert(rndNum);
  }
  //
  cout<<"print the tree:"<<endl;
  // print the tree
  bt.display(cout);

  return 0;
}
