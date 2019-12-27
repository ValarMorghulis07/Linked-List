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


Node *removeDuplicates(Node *root)//o(n) && o(n)
{
 Node *temp1=root,*temp2=NULL;
 unordered_set<int>s;
 while(temp1)
 {
  if(s.find(temp1->data)==s.end())
  {
    s.insert(temp1->data);
    temp2=temp1;
  }
  else
  {
    temp2->next=temp1->next;
    delete temp1;
  }
  temp1=temp2->next;
 }
 return root;

}

Node *removeDuplicates(Node *root)//o(n*n) && o(1)
{
 Node *cur=root;
 while(cur)
 {
   Node *temp=cur;
   while(temp->next)
   {
     if(temp->next->data==cur->data)
      temp->next=temp->next->next;
     else
      temp=temp->next;
   }
   cur=cur->next;
 }
 return root;
}

