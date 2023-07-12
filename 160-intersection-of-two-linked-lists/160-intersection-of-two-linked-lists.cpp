class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currentA = headA;
        ListNode* currentB = headB;
        
        int lenA = 0, lenB = 0;
        
        while (currentA) {
            lenA++;
            currentA = currentA->next;
        }
        
        while (currentB) {
            lenB++;
            currentB = currentB->next;
        }
        
        int diff = abs(lenA - lenB);
        
        currentA = headA;
        currentB = headB;
        
        if (lenA > lenB) {
            while (diff > 0) {
                currentA = currentA->next;
                diff--;
            }
        } else if (lenA < lenB) {
            while (diff > 0) {
                currentB = currentB->next;
                diff--;
            }
        }
        
        while (currentA && currentB) {
            if (currentA == currentB)
                return currentA;
            
            currentA = currentA->next;
            currentB = currentB->next;
        }
        
        return NULL;
    }
};
