// star pyramid
#include<iostream>
using namespace std;
int main(){

  int i,j,k,n;
  cout<<"Enter no. of rows";
  cin>>n;
  int nst=1;
  int nsp=n-1;
    
    for(i=1;i<=n;i++){
        //spaces
        for(j=1;j<=nsp;j++){
            cout<<" ";
    
        } nsp--;
        //star
        for(k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
     
  return 0;
}