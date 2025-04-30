#include "Node.h"

Node::Node(){
    data = 0;
    link = nullptr;
};

Node::Node(int d, Node* l){
    data = d;
    link = l;
};

Node::~Node(){
    delete link;
};

int Node::getData() {
    return data;
};
void Node::setData(int val) {
    data = val;
};
Node* Node::getLink() {
    return link;
};
void Node::setLink(Node* l) {
    link = l;
};