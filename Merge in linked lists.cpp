//  21. Merge Two Sorted Lists


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
     ListNode* head=NULL,*cur;
     if(!l1 && !l2)
         return NULL;
     if(!l1 && l2)
         return l2;
     if(l1 && !l2)
         return l1;
     if(l1->val<l2->val)
     {
      head=l1;
      cur=l1;
      l1=l1->next;
     }
     else
     {
      head=l2;
      cur=l2;
      l2=l2->next;
     }
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
     return head;
    }
};

// 23. Merge k Sorted Lists

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

// 148. Merge sort in LL

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
    if(!head || !head->next)// O(constant space)
        return head;
    ListNode* slow=head,*fast=head->next; // to bring at exactly mid position containing equal nodes
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

