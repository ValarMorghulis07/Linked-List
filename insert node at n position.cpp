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



struct node
{
  ll data;
  node *next;
};
node *head;

void Insert(ll x,ll pos)
{
  node *temp1=new node();
  temp1->data=x;
  temp1->next=NULL;
  if(pos==1)
  {
    temp1->next=head;
    head=temp1;
    return;

  }
  else
  {
    node *temp2=head;
    for(ll i=0;i<pos-2;i++)
    {
      temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
  }


}
void print()
{
 node *temp=head;

 while(temp!=NULL)
 {
   cout<<temp->data<<" ";
   temp=temp->next;
 }
 cout<<"\n";
}
int main()
{
  hs;
  ll t;
  cin>>t;
  f(t)
  {
    head=NULL;
    ll n;
    cin>>n;
    ll a[n],pos[n];
    f(n)
    {
      ll x,pos;
      cin>>x>>pos;
      Insert(x,pos);
      print();
    }

  }
  return 0;
}
