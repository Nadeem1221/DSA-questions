//WAP tp print sum of digits of a given number.ex 512=5+1+2=8
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    cout<<"Entrr the number";
    cin>>n;
    while(n>0){ 
        r=n%10;
        sum=sum+r;
        n/=10; 
         

    } 
      cout<<sum;

  return 0;
}