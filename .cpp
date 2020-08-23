// Detect Loop in linked list

int detectloop(Node *head)
{
 Node *slow=head;
 Node *fast=head;
 while(slow && fast && fast->next)
 {
  slow=slow->next;
  fast=fast->next->next;
  if(slow==fast)
    return 1;
 }
 return 0;

}

// Remove loop in Linked List

void removeTheLoop(Node *head)
{
  Node *slow=head;
  Node *fast=head;
  while(slow && fast && fast->next)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
     slow=head;
     while(slow->next!=fast->next)
     {
      slow=slow->next;
      fast=fast->next;
     }
     fast->next=NULL;

    }
  }

// 142. Linked List Cycle II(starting node of cycle)


class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
     if(!head)
         return NULL;
     ListNode* slow=head,*fast=head;
     while(fast && fast->next)
     {
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast)
      {
       slow=head;
       while(slow!=fast)
       {
         slow=slow->next;
         fast=fast->next;
       }
        return slow;
      }
     }
     return NULL;
    }
};
