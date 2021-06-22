class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
     ListNode* temp=head;
     int cnt=0;
     while(temp)
     {
      cnt++;
      temp=temp->next;
     }
     if(cnt==n)
         return head->next;
     int go=cnt-n+1;
     cnt=1;
     temp=head;
     while(1+cnt<go && temp)
     {
      cnt++;
      temp=temp->next;
     }
     ListNode* temp1=temp->next;
     temp->next=temp->next->next;
     delete temp1;
     return head;
     
     
    }
};
