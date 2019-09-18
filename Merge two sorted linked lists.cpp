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

Node* sortedMerge(Node* head1,   Node* head2)
{
   Node *res,*f=head1,*s=head2;
  if(f->data<s->data)
  {
    res=f;
    f=f->next;
  }
  else
  {
     res=s;
     s=s->next;
  }
  Node *start=res;
  while(f && s)
  {
     if(f->data<s->data)
     {
      res->next=f;
      f=f->next;
      res=res->next;
     }
     else
     {
      res->next=s;
      s=s->next;
      res=res->next;
     }
  }
  if(f)
    res->next=f;
  if(s)
    res->next=s;
 return start;
}
