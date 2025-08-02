//Question 315
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head); // Handles head removal
        ListNode* prev = dummy;

        while (head != NULL) {
            // Detect duplicates
        if (head->next != NULL && head->val == head->next->val) {
        while (head->next != NULL && head->val == head->next->val) {
                    head = head->next; // Skip duplicates
                }
                prev->next = head->next; // Remove entire group
            } else {
                prev = prev->next; // Unique value, move prev forward
            }
            head = head->next; // Move head forward in all cases
        }

        return dummy->next;
    }
};