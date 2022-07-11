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
         ListNode dummy(0);
        ListNode *tail = &dummy;
        while(l1 && l2) {
            ListNode *& node = l1->val < l2->val ? l1 : l2;
            tail = tail->next = node;
            node = node->next;
        }
        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};