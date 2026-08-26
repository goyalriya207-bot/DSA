class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int size=0;
        ListNode *temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;

        }

        int node=size-(n-1);
        int itr=0;

        ListNode *curr=head;

        if(node==1){

            head=head->next;
            return head;


        }

        while(curr!=NULL && itr<=node){
            
            itr++;
            if(itr!=node-1){
                curr=curr->next;
            }
            else{
                curr->next=curr->next->next;
                return head;

            }
        }
        return NULL;
    }

};