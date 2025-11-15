#include<iostream>
using namespace std;
#define maxi 5
int p[maxi];
int top=-1;

void push(int x)
{
  if(top!=maxi-1)
   {
   top++;
   p[top]=x;
   cout<<"pushed:"<<x<<endl;
   }
}
void pop()
{
 if(top!=-1)
 {
  cout<<"poped data="<<p[top]<<endl;
  top--;
 }
}
int main()
{ 
  int a[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
   push(a[i]);
  printf("top=%d\n",top);
  for(int i=0;i<5;i++)
   pop();
  printf("top=%d",top);

}