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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans;
        ListNode **node=&ans;
        int item, mx;
        while (l1 && l2){
            mx = l1->val;
            if (mx > l2->val) {
                mx = l2->val;
                cout << "q";
                l2 = l2->next;
                
            } else {
                cout << "w";
                l1 = l1->next;
            }
            (*node)=new ListNode(mx);
            node=&((*node)->next);
        }
        while(l1){
            (*node)=new ListNode(l1->val);
            node=&((*node)->next);
            cout << "0";
            if (l1->next) l1 = l1->next;
            else break;
        }
        while(l2){
            (*node)=new ListNode(l2->val);
            node=&((*node)->next);
            cout << "1";
            if (l2->next) l2 = l2->next;
            else break;
        }
        return ans;
    }
};