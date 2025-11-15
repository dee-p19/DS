#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#include<cmath>
struct Lstack
{
    char data;
    Lstack *next;
};
Lstack *top,*temp;
void init()
{
    top = temp = NULL;  
}
char push(char x)
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
 char s[100],x;  
 cout <<"enter a string:";
 cin>>s;
 int i,j,n=strlen(s);
 for(i=n-1,j=0;i>0;i--,j++)
 {
   x=push(s[i]);
   if(x!=s[j])
    {cout<<"It is not pallimdrome";
    break;}
 }
 if(i==0)
  cout<<"It is pallindrome";
}