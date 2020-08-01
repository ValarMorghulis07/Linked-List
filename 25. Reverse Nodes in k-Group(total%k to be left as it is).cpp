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
    int length(ListNode *temp)
    {
     int cnt=0;
     while(temp)
     {
      temp=temp->next;
      cnt++;
     }
     return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k)
    {
     if(!head)
         return NULL;
     if(length(head)<k)
         return head;
     ListNode *temp1=head,*temp2=NULL,*temp3=NULL;
     int cnt=0;
     while(temp1 && cnt<k)
     {
      temp3=temp1->next;
      temp1->next=temp2;
      temp2=temp1;
      temp1=temp3;
      cnt++;

     }

     if(temp3)
         head->next=reverseKGroup(temp3,k);
     return temp2;
    }
};
