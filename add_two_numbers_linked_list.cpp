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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* l3=NULL;
        ListNode* head=l3;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            ListNode *temp=new ListNode();
            if(l3==NULL)
            {
                int tempsum=l1->val+l2->val+carry;
                temp->val=tempsum%10;
                carry=tempsum/10;
                l3=temp;
                head=temp;
            }
            else
            {
                int tempsum=l1->val + l2->val + carry;
                temp->val= tempsum%10;
                carry = tempsum/10;
                l3->next=temp;
                l3=l3->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            ListNode *temp=new ListNode();
            int tempsum=l1->val + carry;
            temp->val = tempsum%10;
            carry = tempsum/10;
            l3->next=temp;
            l1 = l1->next;
            l3=l3->next;
        }
        while(l2!=NULL)
        {
            ListNode *temp=new ListNode();
            int tempsum = l2->val + carry;
            temp->val = tempsum%10;
            carry = tempsum/10;
            l3->next = temp;
            l2 = l2->next;
            l3=l3->next;
        }
        if(carry!=0)
        {
            ListNode *temp=new ListNode();
            temp->val=carry;
            l3->next=temp;
            l3=l3->next;
        }
        return head;
    }
};
