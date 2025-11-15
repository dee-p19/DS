#include<stdio.h>
#include<iostream>
using namespace std;
struct Lstack
{
    int data;
    Lstack *next;
};
Lstack *top,*temp;
void init()
{
    top = temp = NULL;  
}
void push(Lstack* &top,int x)
{
    temp = new Lstack;
    if(temp==NULL)
      return;
    temp->data = x;
    temp->next = top;
    top = temp;
}
int pop(Lstack* &top)
{
    int x ;
    if(top == NULL)
        return 0;
    temp = top;
    top = top->next;
    x = temp->data;
    temp->next = NULL;
    delete temp;
    return x;
}
void disp(Lstack* &top)
{
    temp = top;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
main ()
{
  Lstack *top1,*top2,*top3;
  top1=top2=top3=NULL;
  int i,z,p,q;
  cout<<"push 4 elements in stack 1:";
  for (i=0;i<4;i++)
  { cin>>z;
    push(top1,z); }
  cout<<"push 4 elements in stack 2:";
  for(i=0;i<4;i++)
  {
    cin>>z;
    push(top2,z);
  }
  for(i=0;i<8;i+=2)
  {
    p=pop(top1);
    q=pop(top2);
    push(top3,p);
    push(top3,q);
  }
  disp(top3);
}