//31 oct
 #include<stdio.h>
#include<iostream>
using namespace std;
struct DLL 
{
  int data;
  DLL *prev,*next;
};
DLL *first,*temp,*ttemp,*p,*s;
void create_first(int x)
{
  first=new DLL;
  first->data=x;
  first->next=first->prev=NULL;
}
void add_node(int x)
    {temp=first;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    ttemp=new DLL;
    ttemp->data=x;
    temp->next=ttemp;
    ttemp->prev=temp;
    ttemp->next=NULL;
    
}
void display()
{
 temp=first;
 while(temp!=NULL)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}
void add_after(int x)
{
  temp=first;
  while(temp->data!=x)
    temp=temp->next;
  ttemp=temp->next;
  p=new DLL;
  cin>>p->data;
  temp->next=p;
  p->prev=temp;
  p->next=ttemp;
  if(ttemp!=NULL)
  ttemp->prev=p;
}

void add_before(int x)
{ 
  temp=first;
  while(temp->data!=x)
    temp=temp->next;
  ttemp=temp->prev;
  p=new DLL;
  cin>>p->data;
  ttemp->next=p;
  p->prev=ttemp;
  p->next=temp;
  temp->prev=p;
}

void del_after(int x)
{
  temp=first;
  while(temp->data!=x)
   temp=temp->next;
   ttemp=temp->next;
   temp->next=ttemp->next;
   if(ttemp->next!=NULL)
   ttemp->next->prev=temp;
   ttemp->next=ttemp->prev=NULL;
   delete ttemp;
}
// void del_before(int x)
// {
//   temp=first;
//   while(temp->data!=x)
//     temp=temp->next;
//   ttemp=temp->prev;
//   p=ttemp->prev;
//   p->next=temp;
//   temp->prev=p;
//   ttemp->next=ttemp->prev=NULL;
//   delete ttemp;
// }

// void swap_FS()
// {
//    temp = first;
//    while(temp =first->next)
//  ttemp=temp->next;
// temp->next=first;
// temp->prev=NULL;
//  first->prev=temp;
//  first->next=ttemp;
//  ttemp->prev=first;
//  first=temp;
// }
// void swapfl(){
//   temp = first;
//   while( temp -> next != NULL)
//     temp = temp -> next;
//   ttemp = first -> next;
//   temp -> next = ttemp;
//   first -> next = NULL;
//   p = temp -> prev;
//   p -> next = first;
//   first ->prev = p;
//   ttemp -> prev = temp;
//   temp -> next = NULL;
//   first = temp;

// }
void swapfl(){
  temp = first;
  while( temp -> next != NULL)
    temp = temp -> next;
  ttemp = first -> next;
  temp -> next = first;
  first -> next = NULL;
  first -> prev = temp;
  ttemp -> prev = NULL;
  temp -> prev -> next = ttemp;
  first = temp;

}void swapMN(int m,int n)
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
	display();
  swapMN(4,5);
  cout<<"After swapping"<<endl;
  display();
}