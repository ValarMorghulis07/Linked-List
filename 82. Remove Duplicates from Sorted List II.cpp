/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
       ListNode *cur=new ListNode(temp->val);
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
