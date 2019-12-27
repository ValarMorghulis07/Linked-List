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


int getpoint(Node* head1,Node* head2,int d)
{
  Node *temp1=head1;
 Node *temp2=head2;
 for(int i=0;i<d;i++)
 {
  /*if(temp1==NULL)
   return -1;*/
  temp1=temp1->next;
 }

 while(temp1!=NULL && temp2!=NULL)
 {

  if(temp1==temp2)
   return temp1->data;
  temp1=temp1->next;
  temp2=temp2->next;
 }
 return -1;
}
int intersectPoint(Node* head1, Node* head2)
{
  Node* temp1=head1;
  Node* temp2=head2;
  int cnt1=0,cnt2=0;
  while(temp1!=NULL)
  {
    temp1=temp1->next;
    cnt1++;
  }
  while(temp2!=NULL)
  {
    temp2=temp2->next;
    cnt2++;
  }
  if(cnt1>=cnt2)
  {
   int d=cnt1-cnt2;
   int zz=getpoint(head1,head2,d);
   return zz;
  }
  else
  {
    int d=cnt2-cnt1;
    int zz=getpoint(head2,head1,d);
    return zz;
  }

}
