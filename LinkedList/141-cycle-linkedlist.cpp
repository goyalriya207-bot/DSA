class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=NULL && fast->next!=NULL){        //using slow and fasr approach
            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast){
                return true;
             }
        }

        return false;
        
    }
};