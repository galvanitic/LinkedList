//
// Created by Rodolfo J. Galván Martínez on 11/17/20.
//

#include "Node.h"
Node::Node() : next(nullptr) {
  line = "";
}
void Node::setLine(const std::string &aLine) {
  line = aLine;
}
void Node::setNext(std::shared_ptr<Node>* nextNodePtr) {
  next = nextNodePtr;
}

std::string Node::getLine() const {
  return line;
}

std::shared_ptr<Node>* Node::getNext() const {
  return next;
}