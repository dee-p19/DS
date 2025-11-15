#include<stdio.h>
#include<iostream>
using namespace std;
struct CLL
{
 int data;
 CLL *next;
};
CLL *first,*temp,*ttemp,*p;
void create_first()
{
    first=new CLL;
    first->data=10;
    first->next=first;
}
void add_node()
{
    temp=first;
    while(temp->next!=first)
    {
        temp=temp->next;
    }
    ttemp=new CLL;
    ttemp->data=temp->data+10;
    ttemp->next=first;
    temp->next=ttemp;
}
void disp(){
    temp=first;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=first);
}
int  main()
{
    create_first();
    add_node();
    add_node();
    add_node();
    add_node();
    disp();
    return 0;
}

// void add_after(int x)  not required
// {
//  temp=first;
//  ttemp=temp->next;
//  temp=new CLL;
//  temp->next=ttemp;


// void add_before(int x)
// {
//  while(temp!=first);
//  temp=temp->next;
//  ttemp=new CLL;
//  temp->next=first
// }

void add_before(int x){
    temp=first;
    p=new CLL;
    p->data=x;
    p->next=first;
    while(temp->next!=first)
     temp=temp->next;
    temp->next=p;
    first=p;
}

void del_f(){
  
  p=temp=first;
  ttemp=temp->next;
  while(temp->next!=first)
    temp=temp->next;
  temp->next=ttemp;
  first=ttemp;
  delete p;
}
  void swap_SL()
  {
    temp=first;
    while(temp->next->next!=first)
     temp=temp->next;
    ttemp=temp->next;
    ttemp->next=first;
    temp->next=ttemp;
    
     
  }




}