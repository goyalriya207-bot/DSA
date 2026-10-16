class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
          /* int count=0;
           ListNode *temp=head;
           if(head==NULL){
             return head;
           }

           if(head!=NULL && head->next==NULL){
              head=NULL;
              return head;
           }

           while(temp!=NULL){
                count++;
                temp=temp->next;
           }

           int node;

           if(count%2!=0){
              node=(count+1)/2;
           }
           else{
              node=(count/2)+1;
           }
           
           temp=head;
           count=1;
           while(count<node-1 && temp->next!=NULL){
               temp=temp->next;
               count++;
           }

           temp->next=temp->next->next;

           return head;*/

           //APPROACH 2 (SLOW AND FAST POINTER)

            if (!head || !head->next)
            return nullptr;

           ListNode *slow=head;
           ListNode *fast=head;
           ListNode *prev=NULL;

           while(fast!=NULL && fast->next!=NULL){
                  prev=slow;
                  slow=slow->next;
                  fast=fast->next->next;
           }

           prev->next=slow->next;
           delete slow;

           return head;

    }
};