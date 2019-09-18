#include <bits/stdc++.h>

void MyQueue:: push(int x)
{
  QueueNode* temp=new QueueNode(x);
  if(front==NULL && rear==NULL)
  {
    front=temp;
    rear=temp;
  }
  else
  {
      rear->next=temp;
      rear=temp;
  }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
   QueueNode* temp=front;
    if(front==NULL)
       return -1;

  else if(front==rear)
  {
     int x=front->data;
       front=NULL;
       rear=NULL;
       return x;
  }

  else
  {
       int x=front->data;
       front=front->next;
       delete temp;
       return x;

  }
}

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
