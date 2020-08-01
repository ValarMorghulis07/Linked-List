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
    ListNode* swapPairs(ListNode* head) 
    {
    // RECURSIVE 
     /*if(!head)
         return NULL;
     ListNode* temp1=head,*temp2=NULL,*temp3=NULL;
     int cnt=0;
     while(temp1 && cnt<2)
     {
      temp3=temp1->next;
      temp1->next=temp2;
      temp2=temp1;
      temp1=temp3;
      cnt++;
     }
     if(temp3)
         head->next=swapPairs(temp3);
     return temp2;*/
     // ITERATIVE
        
     if(!head || !head->next)
         return head;
     ListNode* temp1=head,*temp2=NULL,*temp3=NULL;
     while(temp1 && temp1->next)
     {
      temp3=temp1->next;
      temp1->next=temp3->next;
      temp3->next=temp1;
      if(temp2)
          temp2->next=temp3;
      else
          head=temp3;
      temp2=temp1;
      temp1=temp1->next;
     }
     return head;
        
    }
};
