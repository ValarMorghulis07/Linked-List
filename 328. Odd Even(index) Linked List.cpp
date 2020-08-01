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
    ListNode* oddEvenList(ListNode* head) // This is entirely by making new set of nodes
    {
     if(!head)
         return NULL;
     if(!head->next)
         return head;
     ListNode* temp=head;
     ListNode* temp1=head->next;
     ListNode* cur=head;
     while(temp && temp->next && temp->next->next)
     {
      temp=temp->next->next;
      cur->next=new ListNode(temp->val);
      cur=cur->next;
     }

     if(temp1)
     {
      cur->next=new ListNode(temp1->val);
      cur=cur->next;
     }
     while(temp1 && temp1->next && temp1->next->next)
     {
      temp1=temp1->next->next;
      cur->next=new ListNode(temp1->val);
      cur=cur->next;

     }
     return head;

    }
};

// This is the actual solution
 ListNode* oddEvenList(ListNode* head)
    {
     if(!head || !head->next || !head->next->next)
         return head;
     ListNode* odd=head,*even=head->next,*evenHead=even;
     while(even && even->next)
     {
      odd->next=even->next;
      odd=even->next;
      even->next=odd->next;
      even=odd->next;
     }
     odd->next=evenHead;
     return head;
    }
