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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return head;
        while (head && head->val == val){
            head = head->next;
        }
        ListNode* node = head;
         while(node && node->next != nullptr){
             if (node->next->val == val){
                 if (node->next->next == nullptr){
                     // end of the list
                     cout << "end of the list " << node->val << " ";
                     node->next = nullptr;
                     break;
                 } else {
                     cout << node->val << " ";
                     node->next = node->next->next;
                 }
             } else node = node->next;
         }
        return head;
    }
};