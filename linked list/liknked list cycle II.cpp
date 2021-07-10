


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/**
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
**/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
             if(head==NULL){
            return NULL;
        }
         struct ListNode*fast,*slow;
      fast=head;
      slow=head;
      while(fast->next!=NULL&&fast->next->next!=NULL){
          fast=fast->next->next;
          slow=slow->next;
          if(slow==fast){
              slow=head;
              while(slow!=fast){
                  slow=slow->next;
                  fast=fast->next;
              }
              return slow;
             
          }
          
      }
      return NULL;
    }
};
