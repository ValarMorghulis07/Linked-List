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
