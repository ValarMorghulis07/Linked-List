Node * removeDuplicates( Node *head) //O(n) && O(n)
{
 if(!head || !head->next)
  return head;
 unordered_set<int>ss;
 Node *temp1=head,*temp2=NULL;
 while(temp1)
 {
  if(ss.find(temp1->data)==ss.end())
  {
    ss.insert(temp1->data);
    temp2=temp1;
  }
  else
  {
   temp2->next=temp1->next;
   delete temp1;
  }
  temp1=temp2->next;
 }
 return head;
}
