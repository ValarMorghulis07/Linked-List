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
  node *prev;
};
node *head;

node *GetNewNode(ll x)
{
  node *newnode=new node();
  newnode->data=x;
  newnode->next=NULL;
  newnode->prev=NULL;
  return newnode;
}

void InsertAtHead(ll x)
{
  node *temp=GetNewNode(x);
  if(head==NULL)
  {
    head=temp;
    return;
  }
  else
  {
    head->prev=temp;
    temp->next=head;
    head=temp;
  }
}

void InsertAtTail(ll x)
{
  node *temp=GetNewNode(x);
  node *temp1=head;
  while(temp1->next!=NULL)
  {
    temp1=temp1->next;
  }
  temp1->next=temp;
  temp->prev=temp1;
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

void ReversePrint()
{
  node *temp=head;
  if(head==NULL)
    return;
  while(temp->next!=NULL)
    temp=temp->next;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->prev;

  }
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
    f(n)
    {
     ll x;
     cin>>x;
     InsertAtHead(x);

    }
    print();
    ll a,b;
    cin>>a>>b;
    InsertAtTail(a);
    InsertAtTail(b);
    print();
    ReversePrint();

  }
  return 0;
}
