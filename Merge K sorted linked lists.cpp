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

struct compare
{
  bool operator() (struct Node* a,struct Node* b)
  {
   return a->data > b->data;
  }
};

Node * mergeKLists(Node *arr[], int N)
{
 Node* head=NULL,*last=NULL;
 priority_queue<Node*,vector<Node*>,compare>pq;
 for(int i=0;i<N;i++)
  if(arr[i]!=NULL)
   pq.push(arr[i]);
 while(!pq.empty())
 {
  Node *temp=pq.top();
  pq.pop();
  if(temp->next!=NULL)
   pq.push(temp->next);
  if(head==NULL)
  {
    head=temp;
    last=temp;
  }
  else
  {
    last->next=temp;
    last=temp;
  }
 }
 return head;
}
