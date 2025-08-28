/* print the Alphabet square
A B C D
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;
int main(){

  int i,j,n;
  cout<<"Enter the no. of rows";
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=65;j<=n+64;j++){   // for(j=1;j<=n;j++){
        cout<<(char)j<<" ";  //cout<<(char)(j+64)<<" ";
        
    } cout<<endl;
  }

  return 0;
}