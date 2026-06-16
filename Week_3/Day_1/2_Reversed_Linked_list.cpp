class Solution {
public:
    ListNode* reverseList(ListNode* head) {        
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* front = curr->next;  // save next node            
            curr->next = prev;            // reverse connection          
            prev = curr;                 // move prev ahead
            curr = front;                // move curr ahead
        }
        return prev;
    }
};
