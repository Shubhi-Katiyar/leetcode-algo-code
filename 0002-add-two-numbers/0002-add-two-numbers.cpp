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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;
        ListNode* dummy=new ListNode(0);
        ListNode* head=dummy;
        int sum=0,current=0;
        while(head1!=NULL&&head2!=NULL){
          sum= head1->val + head2->val + current;
          ListNode* temp = new ListNode(sum % 10);
          dummy->next=temp;
          dummy=temp;
          current=sum/10;
          head1=head1->next;
          head2=head2->next;
        }
        while(head1!=NULL){
          sum= head1->val + current;
          ListNode* temp = new ListNode(sum % 10);
          dummy->next=temp;
          dummy=temp;
          current=sum/10;
          head1=head1->next;
        }
        while(head2!=NULL){
          sum=  head2->val + current;
          ListNode* temp = new ListNode(sum % 10);
          dummy->next=temp;
          dummy=temp;
          current=sum/10;
          head2=head2->next;
        }
        if(current>0){
            ListNode* temp=new ListNode(current);
            dummy->next=temp;
            dummy=temp;
        }
        return head->next;
    }
};