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
     ListNode* reverseList(ListNode* head) {
    //Iterative Approach
    //Time Complexity :- O(N)
    //Space Complexity:- O(1)
        ListNode *prev=NULL , *curr=head, *nex;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        head=prev;
        return head;
    //Note:-      
    //Recursive approach can also be used to reverse a linked list
    //but it uses extra stack space and hence is not the good 
    //solution to be discussed in the interviews!         
    }
};