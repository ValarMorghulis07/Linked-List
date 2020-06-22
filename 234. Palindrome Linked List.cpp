 bool isPalindrome(ListNode* head)
    {
      // O(n) && O(n) space
      if(!head || !(head->next))
           return true;
      stack<int>ss;
      ListNode* temp=head;
      while(temp)
      {
       ss.push(temp->val);
       temp=temp->next;
      }
      bool ff=0;
      ListNode *cur=head;
      while(cur)
      {
       if(cur->val!=ss.top())
           ff=1;
       cur=cur->next;
       ss.pop();
      }
      if(ff)
          return false;
      else
          return true;
  
    // O(n) && O(1) space
   /*
     if(!head || !(head->next))
           return true;
      bool even=1;
      ListNode* slow=head,*fast=head;
      while(fast && fast->next)
      {
        slow=slow->next;
        fast=fast->next->next;
      }
      if(fast)
      {
       even=0;
       slow=slow->next;
      }
       
      ListNode*temp1=head,*temp2=NULL,*temp3;
      // Reverse first half
      while(temp1!=slow)
      {
       temp3=temp1->next;
       temp1->next=temp2;
       temp2=temp1;
       temp1=temp3;
      }
      ListNode* cur=temp2;
      if(!even)
          cur=cur->next;
      bool ff=0;
      while(cur && slow)
      {
        if(cur->val!=slow->val)
            ff=1;
        cur=cur->next;
        slow=slow->next;
      }
      if(ff)
          return false;
      else
          return true;
          */
          

    }
