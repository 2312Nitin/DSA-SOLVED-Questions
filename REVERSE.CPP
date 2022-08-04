   #include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main(){
    Node* head = node1;
   if(head==NULL||head-> next==NULL){
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forw= NULL;
    while(curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}