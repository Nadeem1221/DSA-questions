//print the sum of this series:
//1-2+3-4+5-6.... upto 'n'.

// #include<iostream>
// using namespace std;
// int main(){

//   int n,i;
//   cout<<"Enter the number";
//   cin>>n;
//   int sum=0;

//   for(i=1;i<=n;i++){
//     if(i%2==0)
//     sum-=i;
//     else sum+=i;
//   }
//   cout<<sum;

//   return 0;
// }

/*
take  (1-2)+(3-4)+(5-6).....[(n-1)-n]
       -1  +  -1 + -1 +...... n/2  ==>sum= -1*n/2 */
#include<iostream>
using namespace std;
int main(){
     int n,i;
     cout<<"Enter the number";
     cin>>n;
     int sum=0;
     if(n%2==0)
     sum=-1*n/2;
     else sum=-n/2 +n;
     cout<<"sum is "<<sum;
  

  return 0;
}