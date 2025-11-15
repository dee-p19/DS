#include<stdio.h>
using namespace std;
struct node
{
 char data;
 node *next;
};
node *temp,*ttemp,*shalf,*fhalf,*first,*n;
void create_first(char x)
{
  first=new node;
  first->data=x;
  first->next=NULL;
}
void add_node(char x)
{
 temp=first;
 ttemp=new node;
 while(temp->next!=NULL)
 {
    temp=temp->next;
 }
  temp->next=ttemp;
  ttemp->data=x;
  ttemp->next=NULL;
}

void disp()
{
  temp=first;
  while(temp!=NULL)
   {printf("%c",temp->data);
   temp=temp->next;}
}

void pallindrome()
{
 temp=ttemp=first;
 while(ttemp!=NULL && ttemp->next!=NULL)
 {
    temp=temp->next;
    ttemp=ttemp->next->next;
 }
 if(ttemp!=NULL)
  shalf=temp->next;
 else
  shalf=temp;

node *p=NULL;
//reverse second half
while(shalf!=NULL)
{
  n=shalf->next;
  shalf->next=p;
  p=shalf;
  shalf=n;
}

fhalf=first;
while(p!=NULL)
{
  if( fhalf->data!=p->data)
  {
    printf("it is not pallindrome");
    break;
  }
  else
  {
   fhalf=fhalf->next;
   p=p->next;
}

}if(p==NULL)
 printf("it is pallindrome");
}


int main()
{
  char a[]="malayalam";
  create_first(a[0]);
  for(int i=1;i<9;i++)
  {
    add_node(a[i]);
  }
  //disp();
  pallindrome();
  return 0;
}


