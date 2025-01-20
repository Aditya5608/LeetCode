/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

    
public:
    ListNode* rotateRight(ListNode* head, int k) {
           if (!head){    // shows if head equals to null then return head
            return head;
        }
        int length=1;
        ListNode* tail=head;   //here we created a listnode named tail and assigned its value to head
        ListNode* cur=head; //and current to head
        while (tail->next){
            tail=tail->next;
            length++;   //if its obeying the condition then increase the lenght
        }
        k=k%length;    
        if (k==0){     
            return head;    //if value of k is 0 return head
        }
        for(int i=0;i<length-k-1;i++){
            cur=cur->next;
        }
        ListNode* newh=cur->next;
        cur->next=nullptr;
        tail->next=head;
        return newh;   //returning the final roated linked list
    }
};
    
