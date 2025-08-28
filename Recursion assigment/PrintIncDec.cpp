//first print in increasing oder and then in decreasing order
#include<iostream>
using namespace std;
int print(int n,int i){
    if(i>n) return -1;
    cout<<i<<" ";
    print(n,i+1);
    if(i==1) return -1;
    cout<<i-1<< " " ;

     
}

int main(){
  int n;
  cout<<"Enter the number";
  cin>>n;
  int i=1;
  print(n,i);  

  return 0;
}