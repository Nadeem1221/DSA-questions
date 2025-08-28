/*  1
    2 3
    4 5 6
    7 8 9 10   floyd's triangle
*/

#include<iostream>
using namespace std;
int main(){

  int i,j,n;
  cout<<"Enter no. of rows";
  cin>>n;
  int k=1;
  for(i=1;i<=n;i++){
    
    for(j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
    } cout<<endl;
  }

  return 0;
}