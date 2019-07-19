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

ll ff;

struct node
{
  ll data;
  node *next;
};
node *head;

void Insert(ll x)
{
  node *temp1=new node();
  temp1->data=x;
  temp1->next=NULL;
  if(ff==0)
  {
    temp1->next=head;
    head=temp1;
    ff=1;
    return;
  }
  else
  {
    node *temp2=head;
    while(temp2->next!=NULL)
    {
      temp2=temp2->next;
    }
    temp2->next=temp1;
    temp1->next=NULL;
  }

}

void Delete(ll pos)
{
  node *temp1=head;
  if(pos==1)
  {
    head=temp1->next;
    delete temp1;
    return;
  }
  else
  {
    for(ll i=0;i<pos-2;i++)
    {
     temp1=temp1->next;
    }
    node *temp2=temp1->next;
    temp1->next=temp2->next;
    delete temp2;
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
    ff=0;
    ll n;
    cin>>n;
    f(n)
    {
      ll x;
      cin>>x;
      Insert(x);
    }
    print();
    ll pos;
    cin>>pos;
    Delete(pos);
    print();
  }
  return 0;
}
