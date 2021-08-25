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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode **node = &head;
        int i = 1;
        while((*node)->next){
            i++;
            node = &((*node)->next);
        }
        cout << i;
        if (i == 1) {
            cout << "here";
            ListNode *newNode = NULL;
            return newNode;
        }
        n = i - n;
        if (n == 0) {
            return head->next;
        }
        i = 1;
        ListNode **node2 = &head;
        while((*node2)->next){
            if (i == n) {
                cout << i << n << (*node2)->val;
                (*node2)->next = (*node2)->next->next;
                cout << (*node2)->val;
                break;
            }
            i++;
            node2 = &((*node2)->next);
        }
        return head;
    }
};