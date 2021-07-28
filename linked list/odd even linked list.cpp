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
    ListNode* oddEvenList(ListNode* head) {
              if(!head || !head->next){
            return head;
        }
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* t = second;
        while(first && first->next && second && second->next){
            first -> next = first -> next -> next;
            if(first -> next)
                first = first -> next;
            second -> next = second -> next -> next;
            second = second -> next;
        }
        first -> next = t; 
        return head;
    }
};
