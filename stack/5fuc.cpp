#include<stdio.h>
#include<iostream>
#define null 0
using namespace std;
struct Lstack
{
  int data;
  Lstack* next;
};
Lstack *top,*temp;
void init()
{
  top=temp=null;
}

void push(int x)
{ if(temp==null)
   return;
  temp=new Lstack;
  temp->data=x;
  temp->next=top;
  top=temp;
}

int push()
{ int x;
  if(top==null)
   return 0;
  temp=top;
  x=temp->data;
  top=temp->next;
  temp->next=null;
  delete temp;
  return x ;
}

int disp()
{ temp=top;
  while(temp!=null)
  {cout<<temp->data<<endl;
  temp=temp->next;
  }
}

void a()
{
  
}

void main()
{
  
  

}