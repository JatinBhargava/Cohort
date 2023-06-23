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
    bool isPalindrome(ListNode* head) {
        
         if(head == NULL || head->next == NULL){
            return (head);
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        //slow-fast pointer concept
        while(fast !=NULL and fast->next !=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //reverse a linked list concept
        ListNode* pre = NULL;
        while(slow){
            ListNode* temp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = temp;
        }
        
        
        ListNode* left = head;
        ListNode* right = pre;
        
        while(right != NULL){
            if(left->val != right->val)
                return false;
            
            left = left->next;
            right = right->next;
        }
        return true;
    }
};

/*
bool isPalindrome(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    // slow-fast pointer concept
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // reverse a linked list concept
    ListNode* pre = NULL;
    while (slow != NULL) {
        ListNode* temp = slow->next;
        slow->next = pre;
        pre = slow;
        slow = temp;
    }

    ListNode* left = head;
    ListNode* right = pre;

    while (right != NULL) {
        if (left->val != right->val)
            return false;

        left = left->next;
        right = right->next;
    }
    return true;
}
*/