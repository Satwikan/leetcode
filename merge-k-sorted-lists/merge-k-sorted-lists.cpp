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
    class myComparator
    {
    public:
        int operator() (const ListNode* p1, const ListNode* p2)
        {
            return p1->val > p2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans;
        ListNode **node=&ans;
        if (lists.size() == 0) {
            ListNode* res = NULL;
            return res;
        }
        priority_queue<ListNode*, vector<ListNode*>, myComparator> pq;
        for (int i = 0; i < lists.size(); i++){
            if (lists[i]) {
                pq.push(lists[i]);
                lists[i] = lists[i]->next;
            }
        }
        ListNode* x;
        while(!pq.empty()){
            // cout << pq.top();
            x = pq.top();
            pq.pop();
            (*node)=new ListNode(x->val);
            node=&((*node)->next);
            if (x->next){
                pq.push(x->next);
            }
        }
        return ans;
    }
};