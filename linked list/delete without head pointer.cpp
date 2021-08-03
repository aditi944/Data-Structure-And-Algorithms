class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        if (del == NULL) // If linked list is empty
        return;
    else {
 
        if (del->next == NULL) {
            printf("This is last node, require head, can't "
                   "be freed\n");
            return;
        }
 
        struct Node* temp = del->next;
 
        // Copy data of the next node to current node
        del->data = del->next->data;
 
        // Perform conventional deletion
        del->next = del->next->next;
 
        free(temp);// Your code here
    }
    }

};


//easy solution
class Solution {
public:
    void deleteNode(ListNode* node) {
    *node = *node->next;
    }
};
