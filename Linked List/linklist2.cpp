#include<bits/stdc++.h>
using namespace std;
// Definition of linked list
class Node {
public:
     int data;
     Node* next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node* next) : data(x), next(next) {}
 };


Node* insertAtFirst(Node* list, int newValue) {//given header of the list and a new value to assign
    // Write your code here
    Node* temp=new Node();//Creation of new node
    temp->data=newValue;//assigning data to the node
    temp->next=list;
    list=temp;//adding at the begining
    return list;//retruning the whole new list
    
}