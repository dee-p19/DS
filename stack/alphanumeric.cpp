#include<stdio.h>
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
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
char push(Lstack* &top,char x)
{
    temp = new Lstack;
    if(temp==NULL)
      return 0;
    temp->data = x;
    temp->next = top;
    top = temp;
    return x;
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
int main ()
{
  Lstack *top1,*top2,*top3;
  top1=top2=top3=NULL;
  string z,a="          ",b="           ";
  int i,p=0,q=0,x;
  cout<<"enter an alphanumereic string:";
  cin>>z;
  for (i=0;i<z.length();i++)
  { if(isalpha(z[i]))
     {
      x=push(top1,z[i]);
      a[p]=x;
      p++;
     }
    else
     {
     x=push(top2,z[i]);
     b[q]=x;
     q++;
     }
  }
  cout<<a<<endl;
  cout<<b<<endl;
  return 0;
  
}

//2nd method
// #include<stdio.h>
// #include<iostream>
// #include<cctype>
// #include<string>
// using namespace std;
// struct Lstack
// {
//     char data;
//     Lstack *next;
// };
// Lstack *top,*temp;
// void init()
// {
//     top = temp = NULL;  
// }
// int push(Lstack* &top,char x)
// {
//     temp = new Lstack;
//     if(temp==NULL)
//       return 0;
//     temp->data = x;
//     temp->next = top;
//     top = temp;
// }
// int pop(Lstack* &top)
// {
//     int x ;
//     if(top == NULL)
//        return -1;
//     temp = top;
//     top = top->next;
//     x = temp->data;
//     temp->next = NULL;
//     delete temp;
//     return x;
// }
// void disp(Lstack* &top)
// {
//     temp = top;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main ()
// {
//   Lstack *top1,*top2,*top3;
//   top1=top2=top3=NULL;
//   string z,a="            ",b="            ";
//   int i,p=0,q=0;
//   char x,y;
//   cout<<"enter an alphanumereic string:";
//   cin>>z;
//   for (i=0;i<z.length();i++)
//   { if(isalpha(z[i]))
//       x=push(top1,z[i]);
//     else
//      x=push(top2,z[i]);
//   }
  
//   for (i=0;i<z.length();i++,p++,q++)
//   {
//     x=pop(top1);
//     y=pop(top2);
//     if(x!=-1)
//     a[p]=x;
//     if(y!=-1)
//     b[q]=y;
    
//   }
//   cout<<a<<endl;
//   cout<<b<<endl;
//   return 0;
  
// }