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
    std::string Line;
    std::shared_ptr<Node> next;
public:
    Node();
    void setItem(const std::string& anItem);
    void setNext(Node* nextNodePtr);
    std::string getItem() const ;
    Node* getNext() const ;
};


#endif //LAB3_NODE_H
