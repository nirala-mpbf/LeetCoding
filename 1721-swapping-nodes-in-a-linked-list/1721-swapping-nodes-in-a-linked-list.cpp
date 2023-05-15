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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* tmp=head;
        while(tmp){
            n++;
            tmp=tmp->next;
        }
        // cout<<n<<endl;
        
        ListNode *first=NULL , *second=NULL;
     
        int cnt=1;
        tmp=head;
        while(tmp){
            if(cnt==k){
                first=tmp;
            }
            if(cnt==n-k+1){
                second=tmp;
            }
            cnt++;
            tmp=tmp->next;
        }
        int c=first->val;
        first->val=second->val;
        second->val=c;
        
        return head;
        
    }
};