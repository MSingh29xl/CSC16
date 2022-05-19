#include <iostream>
using namespace std;
#include "Queue.h"

int main(){
	// Test 1
	cout<<"Test 1"<<endl;
	Queue q;
	cout<<"Before enqueue"<<endl;
	q.enqueue(1);
	cout<<"After enqueue"<<endl;
	int frontOfQueue = q.front();
	cout<<frontOfQueue<<endl;
	q.dequeue();

	// Test 2: 0 - 10
	cout<<"Test 2"<<endl;
	Queue q2;
	const int N = 10;
	for(int i = 0; i < N; i++){
	q2.enqueue(i);
	}
	cout<<"Before dequeue"<<endl;
	q2.display(cout);
	frontOfQueue = q2.front();
	cout<<"Front: "<<frontOfQueue<<endl;
	q2.dequeue();
	cout<<"After dequeue"<<endl;
	q2.display(cout);
	frontOfQueue = q2.front();
	cout<<"Front: "<<frontOfQueue<<endl;

	// Test 3 - Capacity
	cout<<"Test 3"<<endl;
	Queue q3;
	const int J = 129; // Oversized
	for(int i = 0; i < J; i++){
	q3.enqueue(i);
	}
	cout<<"Before dequeue"<<endl;
	q3.display(cout);
	frontOfQueue = q3.front();
	cout<<"Front: "<<frontOfQueue<<endl;
	q3.dequeue();
	cout<<"After dequeue"<<endl;
	q3.display(cout);
	frontOfQueue = q3.front();
	cout<<"Front: "<<frontOfQueue<<endl;

	// Test 4: Empty cases
	cout<<"Test 4"<<endl;
	Queue k;
	k.dequeue();
	k.display(cout);
	k.front();

	return 0;
}
