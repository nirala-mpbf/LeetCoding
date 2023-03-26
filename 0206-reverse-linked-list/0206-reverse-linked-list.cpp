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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* temp=NULL;
        
        if(curr==NULL || curr->next==NULL)
            return head;
        
        while(curr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            
            if(temp!=NULL)
                head=temp;
            curr=temp;
            
        }
        return head;
    }
};