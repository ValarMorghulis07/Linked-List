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


Node *create(int x)
{
 Node *temp=new Node();
 temp->data=x;
 temp->next=NULL;
 temp->arb=NULL;
 return temp;

}
Node *copyList(Node *head)
{
  map<Node*,Node*>mp;
  Node *p=head;
  Node *head1=create(p->data);
  mp.insert(make_pair(p,head1));
  Node *temp=head1;
  p=p->next;
  while(p)
  {
    Node *q=create(p->data);
    mp.insert(make_pair(p,q));
    temp->next=q;
    temp=temp->next;
    p=p->next;

  }
  p=head;
  Node *q=head1;
  while(p)
  {
    q->arb=mp[p->arb];
    p=p->next;
    q=q->next;
  }
  return head1;
}
