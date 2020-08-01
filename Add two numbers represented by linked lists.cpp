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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
     int sum=0,carry=0;
     ListNode* head=NULL,*last=NULL,*temp=NULL;
     while(l1 || l2)
     {
      sum=carry+(l1 ? l1->val:0)+(l2 ? l2->val:0);
      carry=(sum>=10) ? 1:0;
      sum=sum%10;
      temp=new ListNode(sum);
      if(!head)
      {
       head=temp;
       last=temp;
      }
      else
      {
       last->next=temp;
       last=temp;
      }
      if(l1)
          l1=l1->next;
      if(l2)
          l2=l2->next;
      
     }
     if(carry==1)
         last->next=new ListNode(1);
     return head;
         
    }
};
