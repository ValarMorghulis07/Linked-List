 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
      ListNode* cur;
       ListNode* ff=l1;
       ListNode* ss=l2;
      if(ff && ss)
      {
      if(ff->val<ss->val)
      {
       cur=ff;
       ff=ff->next;
      }
      else 
      {
        cur=ss;
        ss=ss->next;
      }
      }
      else if(ff && !ss)
          return ff;
      else if(!ff && ss)
          return ss;
      else if(!ff && !ss)
          return NULL;
          
      ListNode* start=cur;
      while(ff && ss)
      {
        if(ff->val<ss->val)
       {
       cur->next=ff;
       ff=ff->next;
       cur=cur->next;
       }
      else
      {
        cur->next=ss;
        ss=ss->next;
        cur=cur->next;
      }
      }
      if(ff)
         cur->next=ff;
      if(ss)
          cur->next=ss;
      return start;
      
    }
