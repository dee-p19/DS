//14 oct
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p;

// void init()
// {
//  first=temp=ttemp=null;
// }
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;
  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}

void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}


void add_after(int x,int y)
{
  temp=first;
  while(temp->data!=x)
  temp=temp->next;
  ttemp=temp->next;
  p=new node;
  p->data=y;
  p->next=ttemp;
  temp->next=p;
}
// void add_before(int x,int y){
//   temp=first;
//   while(temp->next->data!=x)
//    ttemp=temp;     
//    temp=temp->next;
//   p=new node;
//   p->data=y;
//   p->next=temp;
//   ttemp->next=p;
// }

void Add_between(int x,int y)
{
  temp=first;
  while(temp->data!=x)
   ttemp=temp;
   temp=temp->next;
  p=new node;
  p->data=y;
  ttemp->next=p;
  p->next=temp;
}
void del_after(int x)
{
  temp=first;
  while(temp->data!=x)
   temp=temp->next;
   ttemp=temp->next;
   temp->next=ttemp->next;
   ttemp->next=null;
   delete ttemp;
}
void del_before(int x){
temp=first;
while(temp->data!=x)
  {ttemp=temp;
  temp=temp->next;
  }
ttemp->next=temp->next;
temp->next=null;
delete temp;
}


void swapFL()
{temp=first;
 while(temp->next->next!=null)
  { ttemp=temp;
    temp=temp->next;
  }
  p=first->next;
  ttemp->next=first;
  first->next=null;
  temp->next=p;
  first=temp;
}

void swap(int m, int n) {
    // If both positions are same, nothing to do
    if (m == n)
        return;

    // Ensure m < n (so we handle head cases easily)
    if (m > n) {
        int tempIndex = m;
        m = n;
        n = tempIndex;
    }

    // Initialize pointers
    node mtemp = node ntemp= first;
    node mptemp =nptemp = NULL;
 
    
    // Traverse to mth node
    for (int i = 1; i < m && mtemp != NULL; i++) {
        mptemp = mtemp;
        mtemp = mtemp->next;
    }

    // Traverse to nth node
    for (int i = 1; i < n && ntemp != NULL; i++) {
        nptemp = ntemp;
        ntemp = ntemp->next;
    }

    // If either node not found (out of range)
    if (mtemp == NULL || ntemp == NULL)
        return;

    // Link previous of m to n (handle head)
    if (mptemp != NULL)
        mptemp->next = ntemp;
    else
        first = ntemp;

    // nptemp can't be NULL now because n > m always
    nptemp->next = mtemp;

    // Swap next pointers of m and n
    temp = mtemp->next;
    mtemp->next = ntemp->next;
    ntemp->next = temp;
}

int main()
{
	//init();
	createfirst(10);
	addnode(20);
	addnode(30);
	addnode(50);
	addnode(60);
	disp();
}