/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int count_lth(ListNode *head)
    {
        if(head==NULL)
            return 0;
        ListNode *ptr=new ListNode();
        ptr=head;
        int Node_count=0;
        while(ptr!=NULL)
        {
            Node_count++;
            ptr=ptr->next;
        }
        return Node_count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int count1=count_lth(headA);
        int count2=count_lth(headB);
        ListNode *ptr1=new ListNode();
        ListNode *ptr2=new ListNode();
        ptr1=headA;
        ptr2=headB;
        if(count1>count2)
        {  
            if(ptr1==NULL)
            {
                return NULL;
            }
            while(count1-count2>0)
            {
                ptr1=ptr1->next;
                count1--;
            }
        }
        else if(count1<count2)
        {
            while(count2-count1>0)
            {
                ptr2=ptr2->next;
                count2--;
            }
        }
        if(count1==count2)
        {
            while(ptr1!=NULL && ptr2!=NULL && ptr1!=ptr2)
            {
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            if(ptr1!=NULL && ptr2!=NULL && ptr1==ptr2)
            {
                return ptr1;
            }
        }
        return NULL;
    }
};
