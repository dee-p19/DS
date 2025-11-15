#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
 int coef;
 int pow;
 node *next;
};
node *temp,*ttemp,*first;

void create_first(int x,int y)
{
  first=new node;
  first->coef=x;
  first->pow=y;
  first->next=NULL;
}

int add_at(int po)
{
    temp=first;
    int a,b,c,t;
    while(temp!=NULL)
    { 
      if(temp->pow>po)
       {b=temp->pow;
       t=b;}
      else if(temp->pow<po)
         {a=temp->pow;
         t=a;}
      else
        {c=temp->pow;
        t=c;}
      temp=temp->next;
    }
    if(t==b)
      return b;
    else if(t==a)
      return a;
    else
      return c;
}

void add_after(int x,int y,int z)
{
    temp=first;
    ttemp=new node;
    while(temp->pow!=x )
      temp=temp->next;
    ttemp->pow=y;
    ttemp->coef=z;
    ttemp->next=temp->next;
    temp->next=ttemp;
}

void add_before(int x,int y,int z)
{   p=NULL;
    temp=first;
    ttemp=new node;
    while(temp->pow!=x)
      { p=temp;
        temp=temp->next;}
    ttemp->pow=y;
    ttemp->coef=z;
    ttemp->next=temp;
    p->next=ttemp;
}
void add(int x ,int y)
{
  temp=first;
  while(temp->pow!=x)
    temp=temp->next;
  temp->coef=(temp->coef) + y;
}
void disp()
{
  temp=first;
  while(temp!=NULL)
   {printf("%dx^%d ",temp->coef,temp->pow);
  temp=temp->next;}
}

int main()
{
    create_first(5,3);
    for(int i=2;i>0;i--)
    {
     int x,y,v;
     cout<<"enter coefficient:";
     cin>>x;
     cout<<"enter power:";
     cin>>y;
     v=add_at(y);
        if(v>y)
        add_before(v,y,x);
        else if(v<y)
        add_after(v,y,x);
        else
        add(y,x);
   }
   disp();
   return 0;
      
}