/* odd number tringle
        1
        13
        135
        1357
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,j;
//     cout<<"Enter the number of rows";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=(i+i)-1;j++){
//             if(j%2!=0)
//             cout<<j;
//         }
//         cout<<endl;
//     }
        
// }   

#include<iostream>
using namespace std;
int main(){

  int i,j,n;
  cout<<"Enter no. of rows";
  cin>>n;
  for(i=1;i<=n;i++){
    int a=1;
    for(j=1;j<=i;j++){
        cout<<a;
        a+=2;

    } cout<<endl;
  }

  return 0;
}
    

