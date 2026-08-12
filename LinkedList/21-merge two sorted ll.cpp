class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == nullptr)
            return list2;

        if(list2 == nullptr)
            return list1;

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* front;

        ListNode* head;

        if(temp1->val <= temp2->val) {
            head = temp1;
            temp1 = temp1->next;
        }
        else {
            head = temp2;
            temp2 = temp2->next;
        }

        ListNode* current = head;

        while(temp1 != nullptr && temp2 != nullptr) {

            if(temp1->val <= temp2->val) {
                front = temp1->next;      //used logic of merging of two sorted arrays
                
                current->next = temp1;
                current = temp1;
                temp1 = front;
            }
            else {
                front = temp2->next;
                current->next = temp2;
                current = temp2;
                temp2 = front;
            }
        }

        if(temp1 != nullptr)
            current->next = temp1;

        if(temp2 != nullptr)
            current->next = temp2;

        return head;
    }
};