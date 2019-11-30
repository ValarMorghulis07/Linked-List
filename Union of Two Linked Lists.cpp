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


struct node* makeUnion(struct node* head1, struct node* head2)
{
  struct node* temp1=head1;
  struct node *temp2=head2;
  set<int,greater<int>>s;
  while(temp1)
  {
    s.insert(temp1->data);
    temp1=temp1->next;
  }
  while(temp2)
  {
    s.insert(temp2->data);
    temp2=temp2->next;
  }
  struct node *head3=NULL;

  for(auto itr=s.begin();itr!=s.end();++itr)
  {

     node* temp=new node(*itr);
     //temp->data=*itr;
     temp->next=head3;
     head3=temp;
  }

  return head3;
}
