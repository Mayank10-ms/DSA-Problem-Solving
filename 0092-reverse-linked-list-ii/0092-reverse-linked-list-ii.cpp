/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if (head == nullptr || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* beforeLeft = dummy;

        for (int i = 1; i < left; i++) {
            beforeLeft = beforeLeft->next;
        }
        ListNode* leftNode = beforeLeft->next;
        ListNode* prev = nullptr;
        ListNode* curr = leftNode;

        for (int i = left; i <= right; i++) {
            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        beforeLeft->next = prev;
        leftNode->next = curr;

        ListNode* answer = dummy->next;
        delete dummy;

        return answer;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna