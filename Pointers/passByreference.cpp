#include<iostream>
using namespace std;
void swap(int* p1, int* p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    return;

}


int main(){

  int a,b;
  cout<<"Enter two number";
  cin>>a>>b; 
  int* p1=&a;
  int* p2=&b;

  swap(p1,p2);
  cout<<a<<" "<<b;

  return 0;
}