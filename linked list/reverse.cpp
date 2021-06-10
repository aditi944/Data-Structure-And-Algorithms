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
        struct ListNode* current=head,*prev=NULL, *nextptr;
        while(current!=NULL){
            nextptr=current->next;
            current->next=prev;
            prev=current;
            current=nextptr;
            
        }
        return prev;
        
    }
};