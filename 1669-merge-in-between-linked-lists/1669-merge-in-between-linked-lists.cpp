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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* beforeA = list1;
        for(int i =0;i<a-1;i++){
            beforeA=beforeA->next;
        }
        ListNode* afterB = beforeA;
        for(int i = a-1;i<=b;i++){
           afterB = afterB->next; 
        }
        ListNode* tail2 = list2;
        while(tail2->next != nullptr) {
            tail2 = tail2->next;
        }

        beforeA->next = list2;
        tail2->next = afterB;

        return list1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna