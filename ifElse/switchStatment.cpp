//WAP to creat a calculator that perform basic arithmetic operations 
//using switch taking input of two number
#include<iostream>
using namespace std;
int main(){

  float x,y;
  char op;
  cout<<"Enter num1";
  cin>>x;
  cout<<"Enter num2";
  cin>>y;
  cout<<"Enter operation";
  cin>>op;
  
   switch(op){
    case '+':
      cout<<x+y;
    break;
    case '-':
    
   }
  return 0;
}