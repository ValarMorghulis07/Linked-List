/*
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) 
    {
     if(!head || !head->next)
         return head;
     ListNode* temp=head,*as=NULL,*ae=NULL,*bs=NULL,*be=NULL;
     while(temp)
     {
      if(temp->val<x)
      {
       ListNode* temp1=new ListNode(temp->val);
       if(!as)
       {
        as=temp1;
        ae=temp1;
       }
       else
       {
        ae->next=temp1;
        ae=temp1;
       }
      }
      else
      {
       ListNode* temp1=new ListNode(temp->val);
       if(!bs)
       {
         bs=temp1;
         be=temp1;
       }
       else
       {
         be->next=temp1;
         be=temp1;
       }
      }
      temp=temp->next;
     }
     if(!as)
         return bs;
     else
     {
      ae->next=bs;
      return as;
      
     }
     
         
    }
};
