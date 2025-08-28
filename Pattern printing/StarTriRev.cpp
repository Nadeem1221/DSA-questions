/*  print he pattern ,star triangle reverse
        * * * * 
        * * *
        * *
        *
*/
#include<iostream>
using namespace std;
int main(){
   int i,j,n;
   cout<<"Enter the number of rows";
   cin>>n;
   for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*";

    }  cout<<endl;
   }


  return 0;
}