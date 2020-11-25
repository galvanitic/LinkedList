//
// Created by Rodolfo J. Galván Martínez on 11/17/20.
//

#ifndef LAB3_LINKEDLIST_H
#define LAB3_LINKEDLIST_H

#include "LinkedListInterface.h"
#include "Node.h"
#include <iostream>
class LinkedList : public LinkedListInterface {
private:
    std::shared_ptr<Node> headPtr; // Pointer to the first node in the chain.
                   // (Also contains the first element in the list)
    int itemCount;
    std::shared_ptr<Node> getNodeAt(int position) const;

public:
    LinkedList();
    ~LinkedList() override;

    bool isEmpty() const override;
    int getLength() const override;
    std::string getEntry(int position) const override;
    bool insert(int newPosition, const Node& newEntry) override;
    bool remove(int position) override;
    bool removeDuplicates() override;
    void clear() override;
    void displayList() override;
};


#endif //LAB3_LINKEDLIST_H
