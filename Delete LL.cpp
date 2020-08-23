// Delete Middle of Linked List

Node* deleteMid(Node *head)
{
  if(head==NULL)
   return NULL;
   Node *slow=head;
   Node *fast=head;
   while(fast && fast->next)
   {
     fast=fast->next->next;
     slow=slow->next;
   }
   Node *temp=head;
   while(temp->next!=slow)
   {
    temp=temp->next;
   }
   temp->next=slow->next;
   delete slow;
   return head;
}

// Delete Alternate Nodes in LL

void deleteAlt(struct Node *head)
{
  struct Node* temp1=head;
   struct Node* temp2;
  while(temp1 && temp1->next)
  {
   temp2=temp1->next;
   temp1->next=temp2->next;
   delete temp2;
   temp1=temp1->next;
  }
}

// Delete N nodes after M nodes of a linked list

//M!=0
void linkdelete(struct Node  *head, int M, int N)
{
  if(!head)
   return;
  struct Node* temp=head,*temp1;
  int idx;
  while(temp)
  {
   idx=1;
   while(idx<M && temp->next)
   {
     temp=temp->next;
     idx++;
   }
   if(temp==NULL)
    return;
   idx=0;
   temp1=temp;
   while(idx<N && temp->next)
   {
    
    temp=temp->next;
    Node* p=temp;
    delete p;
    idx++;
   }
   temp1->next=temp->next;
   temp=temp->next;
  }
}

//  Delete without head pointer

void deleteNode(Node *node)
{
   Node *temp=node->next;
   node->data=temp->data;
   node->next=temp->next;
   delete temp;
}

// Delete node in Doubly Linked List

// Function to delete the node at position x
void deleteNode(Node **head_ref, int x)
{
 Node *temp=*head_ref;
 if(x==1)
  *head_ref=temp->next;
 while(x!=1)
 {
  --x;
  temp=temp->next;
 }
 if(temp->prev)
   temp->prev->next=temp->next;
 if(temp->next)
   temp->next->prev=temp->prev;
}
