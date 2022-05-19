/*-- Queue.cpp-----------------------------------------------------------
 
   This file implements Queue member functions.

-------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
#include <cstdlib>
#include "Queue.h"


//--- Definition of Queue constructor
Queue::Queue()
: myFront(0), myBack(0)
{}

//--- Definition of empty()
bool Queue::empty() const
{ 
   return (myFront == myBack);
}

//--- Definition of enqueue()
bool Queue::enqueue(const QueueElement & value)
{

   int newBack = (myBack + 1) % QUEUE_CAPACITY;
   if(empty()){ // Empty condition defined
      myArray[myBack] = value;
      myBack = newBack;
      return true;
      }

   if (newBack != myFront)     // queue isn't full
   {
      myArray[myBack] = value; // Configured using myBack to solve definition error
      myBack = newBack;
      return true;
   }
   else
   { // Use of boolean expression for error handling purposes
      //cerr << "*** Queue full -- can't add new value ***\n"
            //"Must increase value of QUEUE_CAPACITY in Queue.h\n";
      return false;
   }
}

//--- Definition of display()
void Queue::display(ostream & out) const
{
   for (int i = myFront; i != myBack; i = (i + 1)%QUEUE_CAPACITY)
      out << myArray[i] << "  ";
   cout << endl;
}

//--- Definition of front()
QueueElement Queue::front() const
{
   if ( !empty() ){
      return (myArray[myFront]);

   }
   else
   { // Better error handling
      /*cerr << "*** Queue is empty "
              " -- returning garbage value ***\n";
      return myArray[QUEUE_CAPACITY-1]; // "Garbage" value */
      throw invalid_argument("Queue is empty");
   }
}

//--- Definition of dequeue()
bool Queue::dequeue()
{
   if ( !empty() ){
      myFront = (myFront + 1) % QUEUE_CAPACITY;
	  return true;
   }
   else
   { // Use of boolean expression for error handling purposes
      //cerr << "*** Queue is empty -- "
              //"can't remove a value ***\n";
      return false;
   }
}
