
class Solution {
public:
    ListNode* partition(ListNode* head, int x)
    {
      ListNode* temp=head;
      if(head==NULL)
          return NULL;
       ListNode* bs=NULL;
       ListNode* be=NULL;
       ListNode* as=NULL;
       ListNode* ae=NULL;
      while(temp)
      {
       if(temp->val<x)
       {
         ListNode* temp1=new ListNode(x);;
         if(bs==NULL)
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
          else
          {
           ListNode* temp1=new ListNode(x);;
           if(as==NULL)
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
          temp=temp->next;
      }
        if(be==NULL)
            return as;
        else
        {
         be->next=as;
            return bs;
        }

    }
};
