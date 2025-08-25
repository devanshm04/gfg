/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == NULL || head->next==NULL) return NULL;
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=nullptr;
        return head;
    }
};