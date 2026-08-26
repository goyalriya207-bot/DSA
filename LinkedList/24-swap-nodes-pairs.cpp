class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode *fir=head;
        ListNode *third=NULL;
        ListNode *prev=NULL;
        ListNode *sec=NULL;
        ListNode *newHead=NULL;
       

        if(head==NULL || head->next==NULL){
            return head;
        }
        else{
            sec=head->next;
            newHead = sec;
        }
        
        while(fir!=NULL &&  sec!=NULL){
                
                third=sec->next;
                sec->next=fir;
                if(prev!=NULL){
                    prev->next=sec;
                }

                fir->next=third;
                prev=fir;
                fir=third;
                if(third != NULL && third->next != NULL) {
                   sec = third->next;
                }
                else{
                    return newHead;
                }
                
        }

        return newHead;
    }
};