#include <bits/stdc++.h>
#define mem(dp,a) memset(dp,a,sizeof(dp))
#define pb(x) push_back(x)
#define m_p(x,y) make_pair(x,y)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repush_back(i,a,b) for(ll i=a;i>=b;i--)
#define f(n) for(ll i=0;i<n;i++)
#define r(n) for(ll j=0;j<n;j++)
#define F first
#define S second
#define pi 3.14159265359
#define hs ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
ll HRX=1e18;
ll INF=1e9+7;

//Iterative

Node* reverseList(Node *head)
{
  Node* temp1=head;
  Node* temp2=NULL;
  Node* temp3;
  while(temp1!=NULL)
  {
    temp3=temp1->next;
    temp1->next=temp2;
    temp2=temp1;
    temp1=temp3;
  }
  return temp2;
}

//Recursive-it's just reverse in group of size of the LL

 ListNode* reverseList(ListNode* head) 
    {
      if(!head)
          return NULL;
      ListNode* temp1=head,*temp2=NULL,*temp3,*temp4=head;
      int cnt=0;
      while(temp4)
      {
        temp4=temp4->next;
        cnt++;
      }
      int zz=0;
      //temp1=head;
      while(temp1 && zz<cnt)
      {
       temp3=temp1->next;
       temp1->next=temp2;
       temp2=temp1;
       temp1=temp3;
       zz++;
      }
      if(temp3)
        head->next=reverseList(temp3);
      return temp2;
    }
};
