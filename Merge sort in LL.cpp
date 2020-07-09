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
    ListNode* sortList(ListNode* head)
    {
    /* ListNode* temp=head; // o(n) space
     if(!temp)
         return NULL;
     vector<int>vv;
     while(temp)
     {
      vv.push_back(temp->val);
      temp=temp->next;
     }
     sort(vv.begin(),vv.end());
     int idx=1;
     ListNode* temp1=new ListNode(vv[0]);
     ListNode* temp2=temp1;
     while(idx<vv.size())
     {
      temp2->next=new ListNode(vv[idx]);
      idx++;
      temp2=temp2->next;
     }
     return temp1;
     */
    if(!head || !head->next)
        return head;
    ListNode* slow=head,*fast=head->next;
    while(fast && fast->next)
    {
     slow=slow->next;
     fast=fast->next->next;
    }
    fast=slow->next;
    slow->next=NULL;
    return merge(sortList(head),sortList(fast));

    }

    ListNode* merge(ListNode* l1,ListNode* l2)
    {
     ListNode* temp=new ListNode(-123456);
     ListNode* cur=temp;
     while(l1 && l2)
     {
      if(l1->val<l2->val)
      {
        cur->next=l1;
        l1=l1->next;
      }
      else
      {
        cur->next=l2;
        l2=l2->next;
      }
      cur=cur->next;
     }
     if(l1)
         cur->next=l1;
     else
         cur->next=l2;
     return temp->next;
    }
};
