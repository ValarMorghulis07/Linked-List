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
 Node *temp=new Node(x);
 temp->next=NULL;
 return temp;
}
Node* addTwoLists(Node* first, Node* second)
{
 Node *temp=NULL,*head=NULL,*last=NULL;
 int sum=0,carry=0;
 while(first!=NULL || second!=NULL)
 {
  sum=carry+(first ? first->data:0)+(second ? second->data:0);
  carry=(sum>=10) ? 1:0;
  sum=sum%10;
  temp=create(sum);
  if(head==NULL)
   head=temp;
  else
   last->next=temp;
  last=temp;
  if(first)
    first=first->next;
  if(second)
    second=second->next;
 }
 if(carry>0)
  temp->next=create(carry);
  return head;

}
