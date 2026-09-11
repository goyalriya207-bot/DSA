class Solution {
public:

    ListNode* getKthNode(ListNode *temp,int k) {

        ListNode *curr=temp;
        int count=1;

        while(count < k && curr!=NULL){
            curr=curr->next;
            count++;
        }

        return curr;
      
    }

    void reverse(ListNode* temp) {

        ListNode *curr=temp;
        ListNode *prev=NULL;
        ListNode *next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode *temp=head;
        ListNode *nextnode=NULL;
        ListNode *prevnode=NULL;
        ListNode *kthnode=NULL;

        while(temp!=NULL){

            kthnode=getKthNode(temp,k);

            if(kthnode==NULL){
                if(prevnode!=NULL){
                    prevnode->next=temp;

                }
                break;
            }

            nextnode=kthnode->next;
            kthnode->next=NULL;
            reverse(temp);

            if(temp==head){
                head=kthnode;
            }
            else{
                prevnode->next=kthnode;
            }
            prevnode=temp;
            temp=nextnode;

        }

        return head;
        
    }
};