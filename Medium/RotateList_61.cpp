//Question 319
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;

        int length = 1;
        ListNode* dummy = head;

        while (dummy->next) {
            dummy = dummy->next;
            length++;
        }

        int position = k % length;
        if (position == 0) return head;

        ListNode* current = head;
        for (int i = 0; i < length - position - 1; ++i) {
            current = current->next;
        }

        ListNode* newHead = current->next;
        current->next = nullptr;
        dummy->next = head;

        return newHead;        
    }
};