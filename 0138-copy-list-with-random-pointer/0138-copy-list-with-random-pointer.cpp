/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;

        Node* curr =head;
        while(curr){
            Node * newnode=new Node(curr->val);
            newnode->next=curr->next;     //new node in the list
            curr->next=newnode;
            curr=newnode->next;
                }
        curr=head;
        while(curr){
            if(curr->random){
                curr->next->random=curr->random->next;  //random poiunter list
            }
            curr=curr->next->next;
        }


        Node* newhead= head->next;
        curr=head;
        while(curr){                       //removing copied lisy
            Node* copy=curr->next;
            curr->next=copy->next;
            if(copy->next){
                copy->next=copy->next->next;
            }
            curr=curr->next;
        }
        return newhead;
    }
};