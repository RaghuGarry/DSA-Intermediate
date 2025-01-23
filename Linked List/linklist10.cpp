#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node* deleteMiddle(Node* head){
    // Write your code here.
    if(head==NULL || head->next==NULL) return 0;
    Node * s=head;
    Node * f=head;
    while(f && f->next){
        s=s->next;
        f=f->next->next;
    }
    Node * i=head;
    while(i->next!=s){
        i=i->next;
    }
    i->next=s->next;
    s->next=NULL;
    return head;
}
