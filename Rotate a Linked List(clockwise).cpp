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
    ListNode* rotateRight(ListNode* head, int k) 
    {
     if(!head || !head->next)
         return head;
     ListNode* temp=head,*last=NULL;
     int cnt=0;
     while(temp)
     {
      last=temp;
      temp=temp->next;
      cnt++;
     }
     k%=cnt;
     if(k==0)
         return head;
     k=cnt-k;
     int zz=1;
     temp=head;
     while(temp && zz<k)
     {
      temp=temp->next;
      zz++;
     }
     ListNode* ans;
     last->next=head;
     ans=temp->next;
     temp->next=NULL;
     return ans;
     
     
    }
};
