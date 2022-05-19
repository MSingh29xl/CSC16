#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
  this->root = 0;
}

bool BinaryTree::insert(DataType data)
{
   // start search at root
   TreeNode *tempNode = root;
   // if tree is empty create root node
   if(tempNode==0)
   {
     root = new TreeNode(data,0,0);
     return true;
   }  
   // if not empty
   TreeNode *prevNode;
   while(tempNode!=0)
   { 
     prevNode = tempNode;
     if(data>tempNode->getData())
       tempNode = tempNode->getRight();
     else
     if(data<tempNode->getData())
       tempNode = tempNode->getLeft();
     else
       return false;
   }
   // create new node
   TreeNode *newNode = new TreeNode(data,0,0);
   if(data>prevNode->getData())
      prevNode->setRight(newNode);
   else
   if(data<prevNode->getData())
      prevNode->setLeft(newNode);
   // return success
   return true;
}

void infixRec(TreeNode *root,std::ostream &out,int level)
{
  //in level counter
  level++;
  // base case
  if(root==0)
    return;
  // inductive part ...
 // go left
  infixRec(root->getLeft(),out,level);
  // visit
  out<<level<<" : "<<root->getData()<<std::endl;
  // go right
  infixRec(root->getRight(),out,level);
}

void BinaryTree::display(std::ostream &out)
{
  infixRec(this->root,out,-1);
}
