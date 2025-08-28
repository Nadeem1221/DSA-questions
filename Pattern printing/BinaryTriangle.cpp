/*binary triangle
        1
        01
        101
        0101
        10101
*/
// #include<iostream>
// using namespace std;
// int main(){

//   int i,j,n;
//   cout<<"Enter the no. of rows";
//   cin>>n;
//   int a=n;
//   for(i=1;i<=n;i++){
//     if(i%2!=0) a=1;
//     else a=0;
//     for(j=1;j<=i;j++){
//         cout<<a;
//         //flipping
//         if(a==1) a=0;
//         else a=1;


//     }
//     cout<<endl;
//   }
  

//   return 0;
// }

#include<iostream>
using namespace std;
int main(){

  int i,j,n;
  cout<<"Enter the number rows";
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
     
     if(i==j || (i+j)%2==0)
        cout<<1;
        else cout<<0;
    }cout<<endl;
  }

  return 0;
}
