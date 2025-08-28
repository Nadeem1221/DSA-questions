//wAP a program to find the value of one number raised to the power of another
#include<iostream>
using namespace std;
int main(){

  int a,b,i;
  cout<<"Enter the base ";
  cin>>a;
  cout<<"Enter power ";
  cin>>b;
  bool flag=true; //true means power is positive
  if(b<0){
    flag=false;   ///means power is negative
    b=-b;
  }
  float power=1;
  for(i=1;i<=b;i++){
    power=power*a;
  }
  if(flag==false){
    power=1/power;
  }
  if(a==0 && b==0) cout<<"not define";
  else
  cout<<a<<" raised to the power" <<b<<" is "<<power;
  


  return 0;
}