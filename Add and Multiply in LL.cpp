// 2. Add LL 1


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
     int sum=0,carry=0;
     ListNode* head=NULL,*last=NULL,*temp=NULL;
     while(l1 || l2)
     {
      sum=carry+(l1 ? l1->val:0)+(l2 ? l2->val:0);
      carry=(sum>=10) ? 1:0;
      sum=sum%10;
      temp=new ListNode(sum);
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
      if(l1)
          l1=l1->next;
      if(l2)
          l2=l2->next;
      
     }
     if(carry==1)
         last->next=new ListNode(1);
     return head;
         
    }
};

// 445. Add LL 2  --> (This question is like sum we do in school days)

class Solution {
public:
    ListNode* addToFront(int val,ListNode* res)
    {
     ListNode* temp=new ListNode(val);
     temp->next=res;
     return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)// Idea is to reverse the o/p list
    {
     ListNode* temp1=l1,*temp2=l2;
     int n1=0,n2=0;
     while(temp1)
     {
      n1++;
      temp1=temp1->next;
     }
     while(temp2)
     {
      n2++;
      temp2=temp2->next;
     }
     ListNode* res=NULL;
     temp1=l1,temp2=l2;
     while(n1>0 && n2>0)
     {
      int sum=0;
      if(n1>=n2)
      {
        sum+=temp1->val;
         temp1=temp1->next;
         n1--;
      }
      if(n2>n1)
      {
       sum+=temp2->val;
       temp2=temp2->next;
       n2--;
      }
       res=addToFront(sum,res);
      
     }
     ListNode* cur=res;
     res=NULL;
     int sum=0,carry=0;
     while(cur)
     {
      sum=carry+cur->val;
      carry=(sum>=10) ? 1:0;
      sum%=10;
      res=addToFront(sum,res);
      cur=cur->next;
     }
     if(carry==1)
         res=addToFront(1,res);
     return res;
    }
};
// Brute force soln is to reverse both list and add as normal then reverse the o/p list also

// Multiply two linked lists

long long  multiplyTwoLists (Node* l1, Node* l2)
{
 long long int num1=0,num2=0;
 long long int mod=1e9+7;
 while(l1 || l2)
 {
  if(l1)
  {
    num1=(num1*10+l1->data)%mod;
    l1=l1->next;
  }
  if(l2)
  {
    num2=(num2*10+l2->data)%mod;
    l2=l2->next;
  }
 }
 return (num1*num2)%mod;
}
