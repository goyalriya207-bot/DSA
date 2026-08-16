class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) {
                head = head->next;            //move head until head is itself the value
        } 
        ListNode *curr=head;  //set curr to new head

        while(curr!=NULL &&curr->next!=NULL){

            if(curr->next->val==val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }

        }

        return head;
        
    }
};