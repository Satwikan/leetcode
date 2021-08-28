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
    bool alreadySeen(ListNode* address, vector<ListNode*>& addresses) {
        for (auto ad: addresses){
            if (ad == address) return true;
        }
        return false;
    }
    bool hasCycle(ListNode *head) {
        vector<ListNode*> addresses;
        while(head){
            if (alreadySeen(head, addresses)) return true;
            else {
                addresses.push_back(head);
            }
            head = &(*head->next);
        }
        return false;
    }
};