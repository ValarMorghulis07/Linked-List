/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head)
    {
     if(!head)
         return NULL;
     // remove all the child pointer;
     Node * cur=head;
     while(cur)
     {
      if(cur->child)
      {
       Node* temp=cur->next;
       cur->next=cur->child;
       cur->next->prev=cur;
       cur->child=NULL;
       Node* temp2=cur->next;
       while(temp2->next)
           temp2=temp2->next;
       temp2->next=temp;;
       if(temp)
           temp->prev=temp2;
      }
      cur=cur->next;
     }
     return head;
    }
};
