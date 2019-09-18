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


int getNthFromLast(Node *head, int n)
{
  struct Node* temp=head;
  int cnt=1;
  while(temp->next!=NULL)
  {
    cnt++;
    temp=temp->next;
  }
  if(n>cnt)
    return -1;
  else
  {
  int go=cnt-n+1;
  struct Node* temp1=head;
  int cnt1=1;
  while(cnt1!=go)
  {
     temp1=temp1->next;
     cnt1++;
  }
  return temp1->data;
  }

}
