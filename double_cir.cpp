//6th november
#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
  int data;
    node *prev ,*next;
};
node *first,*temp,*ttemp,*p,*s;

void create_first(int val)
{
 first=new node;
  first->data=val;
  first->next=first;
  first->prev=first;
}

void add_node(int val)
{
    temp=first->prev;
    ttemp=new node;
    temp->next=ttemp;
    ttemp->data=val;
    ttemp->next=first;
    ttemp->prev=temp;
    first->prev=ttemp;
    
}
 void disp()
 {
  temp=first;
  do{
    cout<<temp->data<<endl;
    temp=temp->next;
  }
  while(temp!=first);
   
 }

void add_before(int x,int y)
{ node *last;
  last=first->prev;
  ttemp=new node;
  ttemp->data=y;
  ttemp->next=first;
  ttemp->prev=first->prev;
  first->prev=ttemp;
  last->next=ttemp;
  first=ttemp;
}

void del_first()
{
  temp=first;
  ttemp=temp->next;
  ttemp->prev=temp->prev;
  first->prev->next=ttemp;
  temp->prev=NULL;
  temp->next=NULL;
  first=ttemp;
  delete temp;
}

void swapMN(int m,int n)
{
  if(m==n) return;

  if(m>n)
   {m=m+n;
   n=m-n;
   m=m-n;}
   temp=ttemp=first;

   //find m
   for(int i=1;i<m && temp->next!=first;i++)
   {
    temp=temp->next;
   }

   for(int j=1;j<n && ttemp->next!=first;j++)
   {
    ttemp=ttemp->next;
   }
   
   //check wheather m and n are adjacent or not
   
   if(m==n-1)  //adjacent
  {
   temp->prev->next=ttemp;
   ttemp->next->prev=temp;
   temp->next=ttemp->next;
   ttemp->prev=temp->prev;
   temp->prev=ttemp;
   ttemp->next=temp;
   if(m==1)
    first=ttemp;
  }

  else
  {
    p=ttemp->prev;
    s=temp->next;
    p->next=temp;
    s->prev=ttemp;
    temp->prev->next=ttemp;
    ttemp->next->prev=temp;
    temp->next=ttemp->next;
    ttemp->next=s;
    ttemp->prev=temp->prev;
    temp->prev=p;
    if(m==1)
     first=ttemp;
 }
}

int main()
{
 create_first(10);
 add_node(20);
 add_node(30);
 add_node(40);
 add_node(50);
 add_node(60);
 disp();
 swapMN(6,2);
 cout<<"after swapping"<<endl;
 disp();
 return 0;
}

