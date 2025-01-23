#include<bits/stdc++.h>
using namespace std;
//delete a last node in the dll

 struct Node {
     int data;
      Node *prev;
      Node *next;
      Node() : data(0), prev(nullptr), next(nullptr) {}
     Node(int val) : data(val), prev(nullptr), next(nullptr) {}
      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
};


Node * deleteLastNode(Node *head) {
    // Write your code here
    Node* temp=head;
    if(temp->next==nullptr) return NULL;
    while(temp->next->next){
        temp=temp->next;
    }
    temp->next->prev=nullptr;
    temp->next=nullptr;
    return head;
    
}

