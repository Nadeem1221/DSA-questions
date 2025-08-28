//print the factorial of a given number n.
#include<iostream>
using namespace std;
int main(){

  int n,i;
  cout<<"Enter the number";
  cin>>n;
  int product=1;
  for(i=1;i<=n;i++){
  product*=i; 

  }
  cout<<product;
  return 0;
}