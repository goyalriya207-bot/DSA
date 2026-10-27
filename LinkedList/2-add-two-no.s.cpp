class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

               ListNode *t1=l1;
               ListNode *t2=l2;

                ListNode* dummyNode = new ListNode(0);
                ListNode* t3 = dummyNode;

               int sum=0;
               int carry=0;

               while(t1!=NULL || t2!=NULL ){
                     sum=carry;

                     if(t1!=NULL){
                        sum+=t1->val;
                     }
                     if(t2!=NULL){
                        sum+=t2->val;
                     }

                     carry=sum/10;
                     int t=sum%10;

                     t3->next = new ListNode(t);
                     t3 = t3->next;

                     if(t1!=NULL){
                        t1=t1->next;
                     }
                     if(t2!=NULL){
                        t2=t2->next;
                     }

               }

               if(carry!=0){
                  t3->next=new ListNode(carry);
               }

           return dummyNode->next;
    }
};