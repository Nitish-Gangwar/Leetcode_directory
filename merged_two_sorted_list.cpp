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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        ListNode *temp1=l1,*temp2=l2,*merged=NULL;
        ListNode *head=merged;
        while(temp1!=NULL && temp2!=NULL)
        {
            ListNode *temp=new ListNode();
            if(temp1->val<=temp2->val)
            {
                temp->val=temp1->val;
                temp->next=NULL;
                
                if(head==NULL)
                {
                    head=temp;
                    merged=head;
                    temp1=temp1->next;
                    continue;
                }
                    
                
                merged->next=temp;
                merged=temp;
                temp1=temp1->next;
                
            }
            else
            {
                temp->val=temp2->val;
                temp->next=NULL;
                if(head==NULL)
                {
                    head=temp;
                    merged=head;
                    temp2=temp2->next;
                    continue;
                }
                merged->next=temp;
                merged=temp;
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL)
        {
            ListNode *temp=new ListNode();
            temp->val=temp1->val;
            temp->next=NULL;
            if(merged==NULL)
                head=merged=temp;
            else
                merged->next=temp;
            merged=temp;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            ListNode *temp=new ListNode();
            temp->val=temp2->val;
            temp->next=NULL;
            if(merged==NULL)
                head=merged=temp;
            else
                merged->next=temp;
            merged=temp;
            temp2=temp2->next;
        }
        return head;
    }
};
