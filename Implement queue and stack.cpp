// Implement Stack using Linked List


//Insert at start and remove from start

void MyStack ::push(int x)
{
 StackNode* temp=new StackNode(x);
 temp->next=top;
 top=temp;


}
/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop()
{
    StackNode* temp=top;
    if(top==NULL)
      return -1;
    else
    {
      int x=top->data;
      top=top->next;
      delete temp;
      return x;
    }
}

// Implement Queue using Linked List

// Insert at end and remove from front

void MyQueue:: push(int x)
{
  QueueNode* temp=new QueueNode(x);
  if(front==NULL && rear==NULL)
  {
    front=temp;
    rear=temp;
  }
  else
  {
      rear->next=temp;
      rear=temp;
  }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
   QueueNode* temp=front;
    if(front==NULL)
       return -1;

  else if(front==rear)
  {
     int x=front->data;
       front=NULL;
       rear=NULL;
       return x;
  }

  else
  {
       int x=front->data;
       front=front->next;
       delete temp;
       return x;

  }
}


