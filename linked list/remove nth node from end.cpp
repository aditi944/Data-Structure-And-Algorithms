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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
             ListNode *thead = head;
        int fromTail = n; 
        
        int listLength = 0;
        
        while (thead != NULL){
            listLength += 1;
            thead = thead->next;
        }
        
        if(listLength == 1){
            return NULL;
        }
        
        int locationToRemove = listLength - fromTail; 
        int curLocation = 0;
        
        
        thead = head;
        
        
        if(locationToRemove == 0){
            return thead->next;
        }
        
        if(locationToRemove == 1){
            thead->next = thead->next->next;
            return thead;
        }
        
        ListNode *previousNode = head;
        
        while(thead != NULL){
            
            if(curLocation == locationToRemove){
                //this is the node we need to remove, so previous node's next must point to this node's next node
                previousNode->next = thead->next;
                return head;
            }
            previousNode = thead;
            thead = thead->next;
            curLocation += 1;
        }
        
        return head;
    }
};
