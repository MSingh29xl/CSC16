#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "Node.h"

class List {
public:
 List() { first = 0; }
 bool empty() { return first == 0;}
 void insert(DataType data);
 void insert(DataType data, int pos);
 bool deleteByPos(int pos);
 void display(std::ostream &out);
 bool insertAtEnd(DataType data);
 bool deleteByValue(DataType data);
 void freeMem();
 ~List() { freeMem(); }
 
private:
 Node *first;

};

#endif //LIST_H
