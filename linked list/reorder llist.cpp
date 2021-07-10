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
/**
You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
**/
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode*p=head;
        vector<int>v;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        p=head;
        int i=0,j=v.size()-1;
        while(p){
            p->val=v[i];
            i++;
            p=p->next;
            if(p){
                p->val=v[j--];
                p=p->next;
            }
        }
    }
};
