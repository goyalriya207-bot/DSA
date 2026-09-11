class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode *curr=head;
        int count=1;
        ListNode *prev=NULL;

        while(count<left && curr!=NULL){
            prev=curr;
            curr=curr->next;
            count++;
        }

        count=left;
        ListNode *prevleft=prev;
          ListNode *first=curr; 
            ListNode *next=NULL; 
         

        while(count <=right && curr!=NULL){

            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }

        if(prevleft!=NULL){
            prevleft->next=prev;
        }  
        else{
            head=prev;
        } 
          first->next = curr;

        return head; 
        
    }
};