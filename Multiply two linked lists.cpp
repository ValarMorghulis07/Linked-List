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

long long  multiplyTwoLists (Node* l1, Node* l2)
{
 long long int num1=0,num2=0;
 long long int mod=1e9+7;
 while(l1 || l2)
 {
  if(l1)
  {
    num1=(num1*10+l1->data)%mod;
    l1=l1->next;
  }
  if(l2)
  {
    num2=(num2*10+l2->data)%mod;
    l2=l2->next;
  }
 }
 return (num1*num2)%mod;
}
