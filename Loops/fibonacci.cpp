// print the nth fibonacci number
#include<iostream>
using namespace std;
int main(){

  int n,i;
  cout<<"Enter the no. of terms";
  cin>>n;
  int a=1;
  int b=1;
  int sum=0;
  for(i=1;i<=n-2;i++){
  sum=a+b;
  a=b;
  b=sum;    
  }
  cout<<sum;  // or we can do cout<<b;
  return 0;
}