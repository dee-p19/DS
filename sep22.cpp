#include<iostream>
using namespace std;    
int main(){
    int a[3][3]={4,5,6,7,8,9,1,2,3};
    int i,j,sum=0; 
    for (i=0;i<9;i++){
      for (j=0;j<2;j++){
        if (i==j)
         sum = sum +a[i][j];
      }
   }  
    cout<<"The sum of the diagonal elements is: "<<sum<<endl;
    return 0;
}



#include<iostream>
using namespace std;
int main(){
    int a[3][3]={4,5,6,7,8,9,1,2,3};
    int i,j,sum=0; 
    for (i=0;i<3;i++){
      for (j=0;j<3;j++){
        if (i<j)
         sum = sum +a[i][j];
      }
   }  
    cout<<"The sum of the upper triangular elements is: "<<sum<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    int a[5],b[5],i;
    cout<< "enter elements in array a";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<< "enter elements in array b";
    for(i=0;i<5;i++){
        cin>>b[i];
    }
    for(i=0;i<5;i++){
        sum=b[i]+a[i];
    }
    cout<<"The sum of the array elements is: "<<sum<<endl;
    return 0;
}
