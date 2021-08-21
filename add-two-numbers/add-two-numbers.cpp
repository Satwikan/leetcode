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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        ListNode **node=&l3;
        int sum = 0;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry>0) {
            // cout << "heel\n";
            sum = 0;
            if (l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = 0;
            if (sum>9) {
                carry = (int)sum / 10;
                cout << "carry:" << carry <<endl;
                sum = sum % 10;
                cout << "sum:" << sum <<endl;
            }
            (*node)=new ListNode(sum);
            // cout << l3->val << " ";
            node=&((*node)->next);
        }
        
        return l3;
    }
};