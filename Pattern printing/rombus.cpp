// rombus
#include<iostream>
using namespace std;
int main(){

  int i,j,n;
  cout<<"Enter no. of rows";
  cin>>n;
  for(i=1;i<=n;i++){
    //for spaces
    for(j=1;j<=n-i;j++){
        cout<<" ";   
    }
    //for stars
    for(int k=1;k<=n;k++){
        cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}