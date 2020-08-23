// Flattening a Linked List

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

// 430. Flatten a Multilevel Doubly Linked List

class Solution {
public:
    Node* flatten(Node* head)
    {
     if(!head)
         return NULL;
     // remove all the child pointer;
     Node * cur=head;
     while(cur)
     {
      if(cur->child)
      {
       Node* temp=cur->next;
       cur->next=cur->child;
       cur->next->prev=cur;
       cur->child=NULL;
       Node* temp2=cur->next;
       while(temp2->next)
           temp2=temp2->next;
       temp2->next=temp;;
       if(temp)
           temp->prev=temp2;
      }
      cur=cur->next;
     }
     return head;
    }
};
