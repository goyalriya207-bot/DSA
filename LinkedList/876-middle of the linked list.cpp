class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode *curr = head;

        int count = 0;
        int mid;

        while(curr != NULL) {
            count++;
            curr = curr->next;
        }

        if(count % 2 == 0) {
            mid = (count / 2) + 1;
        }
        else {
            mid = (count + 1) / 2;
        }

        curr = head;          // here we again start from head

        int itr = 1;

        while(itr < mid) {
            curr = curr->next;
            itr++;
        }

        return curr;          // return that node 
    }
};