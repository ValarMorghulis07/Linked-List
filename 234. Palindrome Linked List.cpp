 bool isPalindrome(ListNode* head)
    {
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

    }
