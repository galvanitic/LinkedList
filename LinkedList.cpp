//
// Created by Rodolfo J. Galván Martínez on 11/17/20.
//

#include "LinkedList.h"
LinkedList::LinkedList() : headPtr(nullptr), itemCount(0) {}
LinkedList::~LinkedList() {
  clear(); // Maybe calling members from destructor is not best practice?
}

std::shared_ptr<Node> LinkedList::getNodeAt(int position) const {
  std::shared_ptr<Node> curPtr(headPtr);
  for(int skip = 1; skip < position; skip++){
    curPtr = curPtr->getNext();
  }
  return curPtr;
}

bool LinkedList::isEmpty() const {
  if (!itemCount || itemCount <= 0){
    return true; // It is empty
  }else{
    return false; // It has sumn' inside
  }
}

int LinkedList::getLength() const {
  return itemCount;
}

std::string LinkedList::getEntry(int position) const {
  bool ableToGet = (position >= 1) && (position <= itemCount);
  if(ableToGet){
    std::shared_ptr<Node> nodePtr(getNodeAt(position));
    return nodePtr->getLine();
  } else{
    std::string message = "getEntry() called with an empty list or ";
    message = message + "invalid position.";
  }
}

bool LinkedList::insert(int newPosition, const Node &newEntry) {
  bool ableToInsert =  (newPosition >= 1) && (newPosition <= itemCount + 1);
  if(ableToInsert){
    //create a new node containing the new entry
    std::shared_ptr<Node> newNodePtr(new Node(newEntry) );

    //attach new node to chain
    if(newPosition == 1){
      // Insert nre node at beginning of chain
      newNodePtr->setNext(headPtr);
      headPtr = newNodePtr;
    } else {
      // Find node that will be before nre node
      std::shared_ptr<Node> prevPtr(getNodeAt(newPosition - 1));

      //Insert new node after node to which prevPtr points
      newNodePtr->setNext(prevPtr->getNext());
      prevPtr->setNext(newNodePtr);
    }
    itemCount++;
  }
  return ableToInsert;
}

bool LinkedList::remove(int position) {
  bool ableToRemove = (position >= 1) && (position <= itemCount);
  if(ableToRemove){
    std::shared_ptr<Node> curPtr(nullptr);
    if(position==1){
      // Remove the first node in the chain
      curPtr = headPtr; // Save ptr to node
      headPtr = headPtr->getNext();
    } else {
//      Find node that is before the one you want to remove
      std::shared_ptr<Node> prevPtr(getNodeAt(position-1));

//      Point to node to remove
      curPtr=prevPtr->getNext();

//      Disconnect indicated node from chain by connecting the prior node w/ the one after
      prevPtr->setNext(curPtr->getNext());
    }
    itemCount--; // Decrease count of entries
  }
  return ableToRemove;
}

bool LinkedList::removeDuplicates() {
  std::shared_ptr<Node> ptr1(headPtr);
  std::shared_ptr<Node> ptr2;
  int positionToRemove = 1;

  while (ptr1 != nullptr && ptr2->getNext() != nullptr){
    ptr2 = ptr1;
    while (ptr2->getNext() != nullptr){
      if(ptr1->getLine() == ptr2->getNext()->getLine()){
        remove(positionToRemove);
      } else{
        ptr2 = ptr2->getNext();
      }
    }
    positionToRemove++;
  }
}


void LinkedList::clear() {
  while (!isEmpty())
    remove(1);
}

void LinkedList::displayList() {
  std::shared_ptr<Node> curNode = headPtr;
  while (curNode != nullptr){
    std::cout << headPtr->getLine() << std::endl;
    curNode = curNode->getNext();
  }
}