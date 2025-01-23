#include<bits/stdc++.h>
using namespace std;
//Deleting a last node in the goven list

  class Node {
  public:
      int data;
     Node *next;
     Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
 };


Node *deleteLast(Node *list){//given the header of the list
    // Write your code here
    Node* temp=list;
    while(temp->next->next){
        temp=temp->next;
    }
    temp->next=nullptr;
    return list;

}