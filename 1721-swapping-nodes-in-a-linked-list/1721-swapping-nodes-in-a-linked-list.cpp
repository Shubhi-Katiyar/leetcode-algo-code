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
         ListNode *curr1=head,*curr2=head;
        int count=0;
        while(curr1!=NULL){
            count++;
            curr1=curr1->next;
        }
        count=count-k;
        curr1=head;
        while(k=k-1){
        curr1=curr1->next;
        }
        while(count--){
        curr2=curr2->next;
         }
        swap(curr1->val,curr2->val);
        return head;
    }
};