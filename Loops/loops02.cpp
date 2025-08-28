//display this AP-1,3,5,7,9.... upto 'n' terms
#include<iostream>
using namespace std;
int main(){

  int i,n;
  cout<<"Enter the no. of terms";
  cin>>n;
  int  a=1;
  for(i=1;i<=n;i++){
       cout<<a<<endl;
       a=a+2;
  }

  return 0;
}