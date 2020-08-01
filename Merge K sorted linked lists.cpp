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
     struct compare
     {
      bool operator()(struct ListNode* a,struct ListNode* b)
      {
        return a->val > b->val; 
      }
     };
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
     ListNode* head=NULL;
     ListNode* last=NULL;
     priority_queue<ListNode*,vector<ListNode*>,compare>pq;
     int n=lists.size();
     for(int i=0;i<n;i++)
     {
      if(lists[i])
          pq.push(lists[i]);
     }
     while(!pq.empty())
     {
      ListNode* temp=pq.top();
      pq.pop();
      if(temp->next)
          pq.push(temp->next);
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
      
     }
        return head;
    }
};
