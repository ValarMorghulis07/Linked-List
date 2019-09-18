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


Node* rotate(Node* head, int k)
{
  Node* temp1=head;
  int cnt=1;
  while(temp1->next!=NULL)
  {
     temp1=temp1->next;
     cnt++;
  }
  int zz,ff=0;
  if(k>cnt)
  {
    zz=k%cnt;
    ff=1;
  }
  if(ff==1 && zz!=0)
  {
    Node *temp2=head;
    int cnt1=1;
    while(cnt1<zz && temp2!=NULL)
    {
        temp2=temp2->next;
        cnt1++;

    }
    Node *temp3=temp2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=head;
    head=temp3->next;
    temp3->next=NULL;
    return head;
  }

  else if(ff==1 && zz==0)
  {
      return head;
  }

  else
  {
     Node *temp2=head;
    int cnt1=1;
    while(cnt1<k && temp2!=NULL)
    {
        temp2=temp2->next;
        cnt1++;

    }
    Node *temp3=temp2;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=head;
    head=temp3->next;
    temp3->next=NULL;
    return head;
  }
}

