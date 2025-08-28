#include<iostream>
using namespace std;
int main(){

 int a,b;
 cout<<"Enter num1 and num2";
 cin>>a>>b;
 int* p1=&a;
 int* p2=&b;
 cout<<*p1 + *p2 ;


}