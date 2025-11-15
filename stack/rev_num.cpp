#include<stdio.h>
#include<iostream>
using namespace std;
#include<cmath>
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
int push(int x)
{
    temp = new Lstack;
    if(temp==NULL)
      return 0;
    temp->data = x;
    temp->next = top;
    top = temp;
    return x;
}
int pop()
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
int disp()
{
    temp = top;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{   
    int n,i=0,rev=0;
    cout<<"enter number:";
    cin>>n;
    while(n>0)
    {
      int x=push(n%10);
      n=n/10;
      rev=rev*10+x;
    
    }
    cout<<rev;
    return 0;
}