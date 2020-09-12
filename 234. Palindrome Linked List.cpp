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
 }
  
  // O(n) && O(1) space
   
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
     if(!head || !head->next)
         return true;
     bool even=0;
     ListNode* slow=head,*fast=head;
     while(fast && fast->next)
     {
      slow=slow->next;
      fast=fast->next->next;
     }
     if(fast)
     {
      even=1;
      slow=slow->next;
     }
     ListNode* cur2=slow;
     ListNode* temp1=head,*temp2=NULL,*temp3=NULL;
     while(temp1!=slow)
     {
      temp3=temp1->next;
      temp1->next=temp2;
      temp2=temp1;
      temp1=temp3;
     }
     ListNode *cur1=temp2;
     if(even)
         cur1=cur1->next;
    
     while(cur1 && cur2)
     {
      if(cur1->val!=cur2->val)
          return false;
      cur1=cur1->next;
      cur2=cur2->next;
          
     }
     return true;
   }
};
