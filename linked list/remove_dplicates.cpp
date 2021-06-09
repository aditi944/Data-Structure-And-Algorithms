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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *current = head;

        ListNode *next_next;

        if (current == NULL)
            return head;

        while (current->next != NULL)
        {
            /* Compare current node with next node */
            if (current->val == current->next->val)
            {
                /* The sequence of steps is important*/
                next_next = current->next->next;

                current->next = next_next;
            }
            else /* This is tricky: only advance if no deletion */
            {
                current = current->next;
            }
        }
        return head;
    }
};