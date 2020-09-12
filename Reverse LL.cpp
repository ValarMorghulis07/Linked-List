// Reverse a linked list


//Iterative

Node* reverseList(Node *head)
{
  Node* temp1=head;
  Node* temp2=NULL;
  Node* temp3;
  while(temp1!=NULL)
  {
    temp3=temp1->next;
    temp1->next=temp2;
    temp2=temp1;
    temp1=temp3;
  }
  return temp2;
}

//Recursive-it's just reverse in group of size of the LL

 ListNode* reverseList(ListNode* head) 
    {
      if(!head)
          return NULL;
      ListNode* temp1=head,*temp2=NULL,*temp3,*temp4=head;
      int cnt=0;
      while(temp4)
      {
        temp4=temp4->next;
        cnt++;
      }
      int zz=0;
      //temp1=head;
      while(temp1 && zz<cnt)
      {
       temp3=temp1->next;
       temp1->next=temp2;
       temp2=temp1;
       temp1=temp3;
       zz++;
      }
      if(temp3)
        head->next=reverseList(temp3);
      return temp2;
    }
};

// Reverse a Linked List in groups of given size

struct node *reverse (struct node *head, int k)
{
struct node *temp1=head;
struct node *temp2=NULL;
 struct node *temp3;
 int cnt=0;
 while(temp1!=NULL && cnt<k)
 {
  temp3=temp1->next;
  temp1->next=temp2;
  temp2=temp1;
  temp1=temp3;
  cnt++;
 }
 if(temp3!=NULL)
   head->next=reverse(temp3,k);
 return temp2;
}

// 25. Reverse Nodes in k-Group(total%k to be left as it is)

class Solution {
public:
    int length(ListNode *temp)
    {
     int cnt=0;
     while(temp)
     {
      temp=temp->next;
      cnt++;
     }
     return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k)
    {
     if(!head)
         return NULL;
     if(length(head)<k)
         return head;
     ListNode *temp1=head,*temp2=NULL,*temp3=NULL;
     int cnt=0;
     while(temp1 && cnt<k)
     {
      temp3=temp1->next;
      temp1->next=temp2;
      temp2=temp1;
      temp1=temp3;
      cnt++;

     }

     if(temp3)
         head->next=reverseKGroup(temp3,k);
     return temp2;
    }
};

// 92.Reverse a linked list from position m to n

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
     if(!head)
         return NULL;
     ListNode *temp1=head,*temp2=NULL,*temp3=NULL;
     while(m>1)
     {
      temp2=temp1;
      temp1=temp1->next;
      m--;
      n--;
     }
     ListNode* prevStart=temp2,*start=temp1;
     while(n>0)
     {
      temp3=temp1->next;
      temp1->next=temp2;
      temp2=temp1;
      temp1=temp3;
      n--;
     }
     if(prevStart)
         prevStart->next=temp2;
     else
         head=temp2;// reversing from index 1(1 based indexing)
     start->next=temp3;
     return head;


    }
};

// 61.Rotate a Linked List(clockwise)

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
     if(!head || !head->next)
         return head;
     ListNode* temp=head,*last=NULL;
     int cnt=0;
     while(temp)
     {
      last=temp;
      temp=temp->next;
      cnt++;
     }
     k%=cnt;
     if(k==0)
         return head;
     k=cnt-k;
     int zz=1;
     temp=head;
     while(temp && zz<k)
     {
      temp=temp->next;
      zz++;
     }
     ListNode* ans;
     last->next=head;
     ans=temp->next;
     temp->next=NULL;
     return ans;
     
     
    }
};
