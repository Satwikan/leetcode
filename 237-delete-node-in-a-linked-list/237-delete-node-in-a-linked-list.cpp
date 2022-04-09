/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL) return;
        
        if (node->next == NULL) {
            delete node;
            return;
        }
        ListNode* next = node->next;
        node->val = next->val;
        node->next = next->next;
        delete next;
    }
};