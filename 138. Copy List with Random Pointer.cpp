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

// o(n) && o(1)

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
     if(!head)
         return NULL;
     Node* cur=head;
     Node* temp;
     while(cur)
     {
      temp=cur->next;
      cur->next=new Node(cur->val);// next of original will point to corresponding copied node;
      cur->next->next=temp;// next of copied will point to next node in corresponding original
      cur=temp;
     }
     cur=head;
     while(cur)
     {
      if(cur->next && cur->random)
          cur->next->random=cur->random->next;// random of copied points to corresponding nodes in copied
      cur=cur->next ? cur->next->next : cur->next;// move to next pointer in original node
     }
     Node* original=head;
     Node* copy=head->next;
     Node* ans=copy;
     while(original && copy)
     {
      original->next=original->next ? original->next->next : original->next;// restoring the next pointer of original
      copy->next=copy->next ? copy->next->next : copy->next;// restoring the next pointer of original
      original=original->next;
      copy=copy->next;
      
      
     }
     return ans;
    
    }
};


