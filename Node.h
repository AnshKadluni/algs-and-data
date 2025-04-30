#ifndef NODE_H
#define NODE_H


class Node {
    private:
        int data;
        Node* link;
    
    public:
        Node();
        Node(int d, Node* l);
        ~Node();
        int getData();
        void setData(int val);
        Node* getLink();
        void setLink(Node* l);


};

#endif