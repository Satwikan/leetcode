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
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0 || head == NULL) return head;
        int count = 1;
        ListNode* node = head;
        while (node->next != NULL) {
            node = node->next;
            count++;
        }
        node->next = head;
        k = k%count;
        int m = count - k;
        while(m > 1){
            head = head->next;
            m--;
        }
        ListNode* next = head->next;
        head->next = NULL;
        return next;
    }
};