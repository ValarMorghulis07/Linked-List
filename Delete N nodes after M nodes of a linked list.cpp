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

//M!=0
void linkdelete(struct Node  *head, int M, int N)
{
  struct Node *cur=head,*temp;
  int i;
  while(cur)
  {
    for(i=1;i<M && cur!=NULL;i++)
     cur=cur->next;
    if(cur==NULL)
     return;
    temp=cur->next;
    for(i=1;i<=N && temp!=NULL;i++)
    {
     Node *p=temp;
     temp=temp->next;
     delete p;
    }
    cur->next=temp;
    cur=temp;

  }
}
