// O(n) && o(n)

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
     if(!head)
         return NULL;
     unordered_map<Node*,Node*>mp;
     Node* head1=new Node(head->val);
     mp[head]=head1;
     Node* org=head->next,*copy=head1;
     while(org)
     {
      Node* temp=new Node(org->val);
      mp[org]=temp;
      copy->next=temp;
      org=org->next;
      copy=copy->next;
     }
     Node* p=head,*q=head1;
     while(p)
     {
      q->random=mp[p->random];
      p=p->next;
      q=q->next;
     }
     return head1;
     
    }
};
