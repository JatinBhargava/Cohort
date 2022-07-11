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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // Step 1 If anyone is empty return second
        if(l1==NULL)
            return l2;
        
        if(l2==NULL)
            return l1;
        
        // step 2 insert first element
        ListNode* temp = NULL;
        
        if(l1->val < l2->val)
        {
            temp = l1;
            l1 = l1->next;
        }
        else
        {
            temp = l2;
            l2 = l2->next;
        }
        
        ListNode *p = temp;
        while(l1 && l2){
            if(l1->val < l2->val)
            {
                p->next = l1;
                l1 = l1->next;
            }
            else
            {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        
        if(l1)
        {
            p->next = l1;
        }
        else
        {
            p->next = l2;
        }
        return temp;
    }
};


    // ListNode dummy(0);
    //     ListNode *tail = &dummy;
    //     while(l1 && l2) {
    //         ListNode *& node = l1->val < l2->val ? l1 : l2;
    //         tail = tail->next = node;
    //         node = node->next;
    //     }
    //     tail->next = l1 ? l1 : l2;
    //     return dummy.next;