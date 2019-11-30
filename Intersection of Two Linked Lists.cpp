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


struct node* findIntersection(struct node* head1, struct node* head2)
{
    struct node *temp1=head1;
    struct node *temp2=head2;
    set<int>s;
    vector<int>v1,v2;
    while(temp1)
    {
     v1.push_back(temp1->data);
     temp1=temp1->next;
    }
    while(temp2)
    {
     v2.push_back(temp2->data);
     temp2=temp2->next;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int i=0,j=0;
    while(i<v1.size() && j<v2.size())
    {
     if(v1[i]==v2[j])
     {
      s.insert(v1[i]);
      i++;
      j++;
     }
     else if(v1[i]>v2[j])
      j++;
     else
      i++;
    }

    vector<int>vec;
    for(auto itr=s.begin();itr!=s.end();++itr)
      vec.push_back(*itr);
    reverse(vec.begin(),vec.end());
    struct node *head3=NULL;
    for(int i=0;i<vec.size();i++)
    {
      node *temp=new node();
      temp->data=vec[i];
      temp->next=head3;
      head3=temp;
    }

    return head3;
}
