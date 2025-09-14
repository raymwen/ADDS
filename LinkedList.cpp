#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len){

}

LinkedList::~LinkedList() {

    while(head != nullptr) {

        deleteFromFront();

    }
}

void LinkedList::printList() {

    Node* currNode = head;

    while (currNode != nullptr) {

        std::cout << currNode->data << std::endl;

        currNode = currNode->link;

    }

    std::cout << std::endl;

}

Node* LinkedList::traverse(unsigned int index) {

    unsigned int position = 0;

    Node* currNode = head;

    while (currNode != nullptr && position < index) {

    currNode = currNode->link;

    position++;

    }
    
    return currNode;

}

void LinkedList::insertPosition(int pos, int newNum) {

    // if adding in front of the current head (including if the list is empty)
    if (pos == 0) {

        head = new Node(newNum, head);

        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node *prevNode = traverse(pos-1);

    // if inserting out of bounds, abort
    if (prevNode == nullptr) {

        return;
    }

    Node *newNode = new Node(newNum, prevNode->link);

    prevNode->link = newNode;
}

void LinkedList::deleteFromFront() {

    if (head == nullptr) {

        return;
    }
    Node* temp = head;

    head = head->link;

    delete temp;
}

bool LinkedList::deletePosition(int pos) {

    Node *currNode = traverse(pos);

    // if inserting out of bounds, abort
    if (currNode == nullptr) {

        return false;
    }

    traverse(pos-1)->link = currNode->link;

    delete currNode;
    
    return true;
}

int LinkedList::get(int pos){

    if(traverse(pos)!=nullptr){

        return traverse(pos)->data;

    }else{
        return std::numeric_limits < int >::max();
    }

}

int LinkedList::search(int target){

    Node* currNode = head;

    int idx = 1;

    while(currNode != nullptr || currNode->data != target){
        
        if(currNode->data == target){
            return idx;
        }

        idx++;
        
        currNode = currNode->link;
    }

    return -1;
}