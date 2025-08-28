#include<iostream>
using namespace std;
int main(){

  int x=5;
  int* ptr=&x;
  cout<<*ptr<<endl;
  ptr=ptr+1;        // 4 byte shift kr dega aage

  cout<<*ptr;
   //(*ptr)++ or (*ptr)-- , dont do this *ptr++ 

  return 0;
}