//Find the Lenth that is the ele in the linked list
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



int length(Node *head)
{
	//Write your code here
    int count=1;
    Node* temp;
    temp=head;
    while(temp->next){
        count++;
        temp=temp->next;
    }return count;

}