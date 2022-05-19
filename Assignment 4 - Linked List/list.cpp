#include "List.h"

void List::insert(DataType data) {
 // Create new node
 Node *newNodePtr = new Node;
 // Set new node data to data
 newNodePtr->data = data;
 // Set new node pointer to first
 newNodePtr->next = first;
 // Set first to new node pointer
 first = newNodePtr;
}

void List::display(std::ostream&out) {
 Node *temp = first;
 while(temp!=0){
  // Print temp data
  out<<temp->data<<std::endl;
  // Move temp to next element in the list
  temp = temp->next;
 }
}

void List::insert(DataType data, int pos) {
 // if list is empty
 if(empty()){
  insert(data);
  return;
 }
 // If list is not empty
 // Traverse list until we find pos - 1
 Node *temp = first;
 int counter = 0;
 // While temp is not null
 while(temp != 0 && counter < pos -1){
  // Move to next element in the list
  temp = temp->next;
  // Int counter
  counter++;
 }
 // When we are here we found pred
 Node *newNode = new Node;
 // Set data to new data
 newNode->data = data;
 // Set the next pointer to pred (temp) next
 newNode->next = temp->next;
 ////
 // Make pred(temp) point to new node
 temp->next = newNode;
}

void List::freeMem(){

 // Init temp to beginning of the list
 Node *temp = first;
 // While temp is not null
  while(temp != 0){
   Node *savePtr = temp;
  // Move temp to the next element in the list
  temp = temp->next;
  // Free memory for individual node
  delete savePtr;
 }

}

bool List::deleteByPos(int pos){
 //if list is empty
 if(empty()){
  return false;
 }

 Node *temp = first;
  int counter = 0;

 //If position == 0
 if(pos == 0){
    // Save deletePtr position
    Node *delPos = temp;
    // Make temp point to next after delete pos
    temp->next = delPos->next; //temp->next->next
    // Assign next element as the first element
    first = temp->next;
    // Delete ptr at pos
    delete delPos;
    // Return success
    return true;
 }

 // While temp is not null
 while(temp != 0 && counter < pos -1){
  // Move to next element in the list
  temp = temp->next;
  // Int counter
  counter++;
 }

 // When we are here we found pred
 // Save deletePtr position
 Node *delPos = temp->next;
 // Make temp point to next after delete pos
 temp->next = delPos->next; //temp->next->next
 // Delete ptr at pos
 delete delPos;
 // Return success
 return true;
}

bool List::insertAtEnd(DataType data){
    //if list is empty
    if(empty()){
        insert(data);
        return true;
 }
	// If list is not empty
	Node *newNode = new Node;
	// Set data to new data
	newNode->data = data;
	 // Set newNode->next to null
	newNode->next = 0;
    Node *temp = first;
	// Traverse list until we find the end
	// While temp is not null
	while(temp->next != 0){
		// Move to next element in the list
		temp = temp->next;
		}
	// When we are here we have found the end of the linked list
    temp->next = newNode;
	
    return true;
}

bool List::deleteByValue(DataType data){
    //if list is empty
    if(empty()){
        return false;
 }

    // If list is not empty
    Node *temp = first;

    //If position == 0
    if(first->data == data){
        // Save deletePtr position
        Node *delVal = temp;
        // Set temp as the element after delVal
        temp = delVal->next;
        // Assign next element as the first element
        first = temp;
        // Delete ptr at pos
        delete delVal;

 }
    while(temp->next->data != data){
            temp = temp->next;
        }
    if(temp->next == 0){
        return false;
    }
    // When we are here we found pred
    // Save delVal position
    Node *delVal = temp->next;
    // Make temp point to next after delete pos
    temp->next = delVal->next; //temp->next->next
    // Delete ptr at val
    delete delVal;


    return true;
}
