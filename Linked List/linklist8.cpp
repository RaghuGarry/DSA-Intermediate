//Find the starting point of the loop in a linked list

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



Node *firstNode(Node *head)
{
    //    Write your code here.
    Node * t=head;
    Node * r=head;
    Node * sol=head;
    while(t && r && r->next){
        t=t->next;
        r=r->next->next;
        if(t==r){
            while(t!=sol){
                t=t->next;
                sol=sol->next;
            }return sol;
        }
    }return NULL;
}