class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        ListNode *curr = head;
        ListNode *dummy = NULL;
        ListNode *currnext = NULL;

        while (curr != NULL) {
            currnext = curr->next;

            curr->next = dummy;
            curr->prev = currnext;

            dummy = curr;
            curr = currnext;
        }

        return dummy;
    }
};