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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * curr = headA;
        int l1 = 0;
        while(curr != NULL) {
            curr = curr->next;
            l1++;
        }
        curr = headB;
        int l2 = 0;
        while(curr != NULL) {
            curr = curr->next;
            l2++;
        }
        while (headA != headB) {
            if (l1 > l2) {
                headA = headA->next;
                l1--;
            } else {
                headB = headB->next;
                l2--;
            }
        }
        return headA;
    }
};