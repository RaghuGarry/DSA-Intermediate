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
        


Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node * prev=nullptr;
    Node * nextnode=nullptr;
    while(head){
        nextnode=head->next;
        head->next=prev;
        prev=head;
        head=nextnode;

        
    }
    return prev;
}
