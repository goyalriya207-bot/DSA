class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while (tempA != NULL) {

            tempB = headB;

            while (tempB != NULL) {

                if (tempA != tempB) {                                //optimal approach O(m*n);
                    tempB = tempB->next;
                }
                else {
                    return tempA;
                }
            }

            tempA = tempA->next;  
        }

        return NULL;  
    }
};