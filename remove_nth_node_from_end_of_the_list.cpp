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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(n>count)
            return head;
        int node_to_be_deleted=count-n;
        //temp=head;
        int node_count=0;
        ListNode *prev=NULL,*cur=head;
        while(cur!=NULL && node_count<node_to_be_deleted)
        {
            prev=cur;
            cur=cur->next;
            node_count++;
            //temp=temp->next;
        }
        if(cur==NULL)
            return head;
        if(cur!=head)
        prev->next=cur->next;
        else if(cur==head && count>1)
            head=head->next;
        else
            head=NULL;
        return head;
    }
};
