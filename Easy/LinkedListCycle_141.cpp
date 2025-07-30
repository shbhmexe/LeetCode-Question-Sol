
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !(head->next))
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        if(fast != slow)
            return NULL;    
        
        
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
               return true;
            }
            
        }
        return false;
        
       
    }
};