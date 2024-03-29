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
    ListNode* middleNode(ListNode* head) {
        ListNode* iter = head;
        int count = 0;
        while(iter){
            iter = iter->next;
            count++;
        }
        int middle = (count%2 == 0)? count / 2: (count - 1)/2;
        cout << count << " " << middle<<endl;
        while (middle){
            head = head->next;
            middle--;
        }
        return head;
        
    }
};