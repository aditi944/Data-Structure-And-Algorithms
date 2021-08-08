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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0)
        return head;
         
    ListNode *ptr=head;
    int len=1;
    while(ptr->next){
        ptr=ptr->next;
        len++;
    }
    //counting length of list
    
    ptr->next=head;
    k=k%len;
    len=len-k;
    //creating a cyclic list and modifying value of k
    
    while(len--) ptr=ptr->next;
    
    head=ptr->next;
    ptr->next=NULL;
    //breaking the nodes and setting the new head
    
    return head;
    }
};
