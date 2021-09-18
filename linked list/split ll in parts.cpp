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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
          vector<ListNode*> ans;
        ListNode* temp = head;
        int size=0;
        while(temp){
            temp=temp->next;
            size++;
        }
        if(size<k){
            while(k--){
                ListNode* t = head;
                if(head) head=head->next;
                ans.push_back(t);
                if(t) t->next=NULL;
            }
            return ans;
        }
        int x = size/k;
        int flg = size%k;
        while(k--){
            ListNode* z = head;
            int cnt=1;
            while(cnt<x){
                head=head->next;
                cnt++;
            }
            if(flg>0){
                head=head->next;
                flg--;
            }
            ans.push_back(z);
            z=head;
            head=head->next;
            z->next=NULL;
        }
        return ans;
    }
};
