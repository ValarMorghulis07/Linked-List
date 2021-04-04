// 160. intersection Point in Y Shapped Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersection(ListNode* temp1,ListNode* temp2,int d)
    {
     for(int i=0;i<d;i++)
         temp1=temp1->next;
     while(temp1 && temp2)
     {
      if(temp1==temp2)
          return temp1;
      temp1=temp1->next;
      temp2=temp2->next;
     }
     return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
     if(!headA || !headB)
         return NULL;
     ListNode* temp1=headA,*temp2=headB;
     int cnt1=0,cnt2=0;
     while(temp1)
     {
      cnt1++;
      temp1=temp1->next;
     }
     while(temp2)
     {
     cnt2++;
     temp2=temp2->next;
     }
     if(cnt1>=cnt2)
     {
      int d=cnt1-cnt2;
      ListNode* ans=getIntersection(headA,headB,d);
      return ans;
     }
     else
     {
      int d=cnt2-cnt1;
      ListNode* ans=getIntersection(headB,headA,d);
      return ans;
     }
   
    }
};
