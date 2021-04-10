// 83. Remove Duplicates from Sorted List

// Given a sorted linked list, delete all duplicates such that each element appear only once.

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
     if(!head || !head->next)
         return head;
     ListNode* temp=head;
     while(temp && temp->next)
     {
      if(temp->val==temp->next->val)
          temp->next=temp->next->next;
      else
         temp=temp->next;
      
     }
     return head;
    }
};


// 82. Remove Duplicates from Sorted List II

// Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
     if(!head || !head->next)
         return head;

     ListNode* temp=head,*start=NULL,*end=NULL;
     while(temp && temp->next)
     {
      if(temp->val==temp->next->val)
      {
       int zz=temp->val;
       while(temp && temp->val==zz)
        temp=temp->next;
      }
      else
      {
       ListNode *cur=new ListNode(temp->val); // if want to do in O(1) space ,just instead of cur use temp everywhere
       if(!start)
       {
        start=cur;
        end=cur;
       }
       else
       {
        end->next=cur;
        end=cur;
       }
        temp=temp->next;
      }
     }
     if(temp)
     {
      if(!start)
       start=new ListNode(temp->val);
      else
        end->next=new ListNode(temp->val);
     }

     return start;
    }
};

// Remove duplicates from an unsorted linked list

Node * removeDuplicates( Node *head) //O(n) && O(n)
{
 if(!head || !head->next)
  return head;
 unordered_set<int>ss;
 Node *temp1=head,*temp2=NULL;
 while(temp1)
 {
  if(ss.find(temp1->data)==ss.end())
  {
    ss.insert(temp1->data);
    temp2=temp1;
  }
  else
  {
   temp2->next=temp1->next;
   delete temp1;
  }
  temp1=temp2->next;
 }
 return head;
}
