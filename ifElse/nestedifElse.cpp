//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter positive integer n";
  cin>>n;
  if(n%5==0 || n%3==0){

          if( n%15==0){
            cout<<"Number is not divisible ";
          }
          else {
            cout<<"number is divisible";
          }

  }
  else{
    cout<<"Number is not divisible";
  }

  return 0;
}