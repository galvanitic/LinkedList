//
// Created by Rodolfo J. Galván Martínez on 11/17/20.
//

#ifndef LAB3_LINKEDLISTINTERFACE_H
#define LAB3_LINKEDLISTINTERFACE_H

#include "Node.h"

class LinkedListInterface{
public:
    virtual bool isEmpty() const = 0;

    virtual int getLength() const = 0;

    virtual bool insert(int newPosition, const Node& newEntry) = 0;

    virtual bool remove(int position) = 0;

    virtual void clear() = 0;

    virtual std::string getEntry(int position) const = 0;

    virtual bool removeDuplicates() = 0;

    virtual void displayList() = 0;

    virtual ~LinkedListInterface() = default;
};
#endif //LAB3_LINKEDLISTINTERFACE_H
