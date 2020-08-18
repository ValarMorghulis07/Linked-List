
// This is the actual solution
 ListNode* oddEvenList(ListNode* head)
    {
     if(!head || !head->next || !head->next->next)
         return head;
     ListNode* odd=head,*even=head->next,*evenHead=even;
     while(even && even->next)
     {
      odd->next=even->next;
      odd=even->next;
      even->next=odd->next;
      even=odd->next;
     }
     odd->next=evenHead;
     return head;
    }
