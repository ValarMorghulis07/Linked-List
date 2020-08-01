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

