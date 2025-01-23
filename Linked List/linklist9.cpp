//Find the length of the loop
#include<bits/stdc++.h>
using namespace std;
 class Node {
 public:
     int data;
      Node *next;
 
  Node(int data) {
           this->data = data;
          this->next = NULL;
     }
 };

int ans(Node* sol){
        Node* z=sol->next;
        int count=2;
        while(z!=sol){
            z=z->next;
            count++;
        }return count;
}
int lengthOfLoop(Node *head) {
    // Write your code here
    if(head==NULL || head->next==NULL) return 0;
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
            }return ans(sol);
        }
    }return 0;
}
