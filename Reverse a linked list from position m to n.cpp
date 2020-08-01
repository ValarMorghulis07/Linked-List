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
    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
     if(!head)
         return NULL;
     ListNode *temp1=head,*temp2=NULL,*temp3=NULL;
     while(m>1)
     {
      temp2=temp1;
      temp1=temp1->next;
      m--;
      n--;
     }
     ListNode* prevStart=temp2,*start=temp1;
     while(n>0)
     {
      temp3=temp1->next;
      temp1->next=temp2;
      temp2=temp1;
      temp1=temp3;
      n--;
     }
     if(prevStart)
         prevStart->next=temp2;
     else
         head=temp2;
     start->next=temp3;
     return head;


    }
};
