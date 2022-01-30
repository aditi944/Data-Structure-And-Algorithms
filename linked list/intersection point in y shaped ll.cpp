/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
//     
 Node *start1=head1;
   Node *start2=head2;
   int len1=0;
   while(start1!=NULL)
   {
       start1=start1->next;
       len1++;
   }
   int len2=0;
   while(start2!=NULL)
   {
       start2=start2->next;
       len2++;
   }
   int d=abs(len1-len2);
   start1=head1;
   start2=head2;
   if(len1>len2)
   {
       for(int i=0; i<d; i++)
       {
           start1=start1->next;
       }
   }
   else
   {
       for(int i=0; i<d; i++)
       {
           start2=start2->next;
       }
   }
   while(start1!=start2)
   {
       start1=start1->next;
       start2=start2->next;
   }
   return(start1->data);
}
