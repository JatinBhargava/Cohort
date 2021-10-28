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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA,*temp2=headB;
        if(headA==NULL || headB==NULL)
            return NULL;
        int n=0,m=0;
        while(temp1)
        {
            n++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            m++;
            temp2=temp2->next;
        }
        
        temp1=headA;
        temp2=headB;
        
        if(n>=m)
        {
            n=n-m;
            while(n)
            {
                n--;
                temp1=temp1->next;
            }
                while(temp1&&temp2)
                {
                    if(temp1==temp2)
                        return temp1;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
        }
        else if(n<m)
          {
            m=m-n;
            while(m)
            {
                m--;
                temp2=temp2->next;
            }
                while(temp1&&temp2)
                {
                    if(temp1==temp2)
                        return temp2;
                    temp1=temp1->next;
                    temp2=temp2->next;
                }
        }   
        return NULL;
    }
};