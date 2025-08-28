#include<iostream>
using namespace std;
int main(){
  int i,j,k,n;
  cout<<"Enter no. of rows:";
  cin>>n;
  int nst=1;
  int nsp=(n-1);
  for(i=1;i<=n;i++){
    //for spaces
    for(j=1;j<=nsp;j++){
        cout<<" ";
    }
    // for numbers 
    for(k=1;k<=nst;k++){
        cout<<"*";
        
    
    } cout<<endl; 
  }


  return 0;
}