
struct Node {
     int value;
      Node *prev;
      Node *next;
       Node() : value(0), prev(nullptr), next(nullptr) {}
      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 };


Node * insertAtTail(Node *head, int k) {
    // Write your code here
    Node* last=new Node(k);
    if(head==nullptr){
        last->value=k;
        return last;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;

    }
    temp->next=last;
    last->prev=temp;
    last->next=nullptr;
    return head;
}
