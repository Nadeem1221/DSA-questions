/* print star plus
             *
             *
         * * * * *
             *
             *
             
 */

#include<iostream>
using namespace std;
int main(){

  int i,j,n;
  cout<<"Enter the no. of rows";
  cin>>n;
int mid= n/2 +1;
  for(i=1;i<=n;i++){
  
    for(j=1;j<=n;j++){
      if(mid==i || mid==j)
      cout<<"*";
      else cout<<" ";
         
    }cout<<endl;
  }

  return 0;
}