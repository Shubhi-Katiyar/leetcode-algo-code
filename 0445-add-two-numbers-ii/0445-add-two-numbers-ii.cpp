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
    ListNode* reverse(ListNode* li){
        ListNode* curr=li;
        ListNode* prev=NULL;
        ListNode* front=NULL;
        while(curr!=NULL){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=reverse(l1);
        ListNode* head2=reverse(l2);
        ListNode* dummy=new ListNode(0);
        ListNode* head=dummy;
        int current=0;
        while(head1!=NULL||head2!=NULL||current!=0){
        int sum=current;
        if(head1){
            sum+=head1->val;
            head1=head1->next;
        }
        if(head2){
            sum+=head2->val;
            head2=head2->next;
        }
        dummy->next=new ListNode(sum%10);
        current=sum/10;
        dummy=dummy->next;
        }
        return reverse(head->next);
    }
};