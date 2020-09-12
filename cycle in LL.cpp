// Detect Loop in linked list

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
     ListNode* slow=head,*fast=head;
     while(fast && fast->next)
     {
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast)
          return true;
     }
     return false;
    }
};

// Remove loop in Linked List

void removeTheLoop(Node *head)
{
  Node *slow=head;
  Node *fast=head;
  while(fast && fast->next)
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
