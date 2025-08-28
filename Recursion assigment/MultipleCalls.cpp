//Find nth fibonacci number; 1  1  2  3  5  8
#include<iostream>
using namespace std;
void fibo(int n,int &a,int &b ,int &sum){
    if(n==1 || n==2) return 1;
   
    sum=a+b;
    a=b;
    b=sum;

    fab(a,b,sum)=fab(n-1,a,b,sum) + fab(n-1,a,b,sum);
}
int main(){

  int n;
  int a=1;
  int b=1;
  cout<<"Enter the nth term ";
  cin>>n;
  int sum=0;
  fibo(n,a,b,sum);

  return 0;
}