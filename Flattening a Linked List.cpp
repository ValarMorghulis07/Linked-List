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


vector<int>vec;
Node *flatten(Node *root)
{
   vec.clear();
   if(root==NULL)
    return NULL;
   Node *temp=root;
   Node *hrx=NULL;
   while(temp!=NULL)
   {
     vec.push_back(temp->data);
     hrx=temp->bottom;
     while(hrx!=NULL)
     {
      vec.push_back(hrx->data);
      hrx=hrx->bottom;
     }
     temp=temp->next;
   }
   sort(vec.begin(),vec.end());
   for(int i=0;i<vec.size();i++)
     cout<<vec[i]<<" ";
   return NULL;

}
