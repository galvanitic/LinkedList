//
// Created by Rodolfo J. Galván Martínez on 11/17/20.
//

#ifndef LAB3_NODE_H
#define LAB3_NODE_H
#include <string>
#include <memory>
//using namespace std;

class Node {
private:
    std::string line; // A line from the text
    std::shared_ptr<Node>* next; // pointer to next node
public:
    Node();
    void setLine(const std::string& aLine);
    void setNext(std::shared_ptr<Node>* nextNodePtr);
    std::string getLine() const ;
    std::shared_ptr<Node>* getNext() const ;
};


#endif //LAB3_NODE_H
