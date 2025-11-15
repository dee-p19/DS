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
void push(int x)
{
    temp = new Lstack;
    if(temp==NULL)
      return;
    temp->data = x;
    temp->next = top;
    top = temp;
}
int pop()
{
    int x ;
    if(top == NULL)
        return;
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
    init();
    push(10);
    push(20);
    push(30);
    disp();

    cout<<"Popped element: "<<pop()<<endl;
    cout<<"Popped element: "<<pop()<<endl;
    cout<<"Popped element: "<<pop()<<endl;
    return 0;
}

//impliment multiple stack in a single array;
