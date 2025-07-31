//Question 300
class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return head;

        Node* curr = head;

        while (curr) {
            if (curr->child) {
                Node* next = curr->next;

                // Flatten the child list
                Node* child = flatten(curr->child);

                // Connect current node to child
                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                // Move to the tail of the flattened child list
                Node* temp = child;
                while (temp->next) {
                    temp = temp->next;
                }

                // Connect the tail to next
                temp->next = next;
                if (next) {
                    next->prev = temp;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};
