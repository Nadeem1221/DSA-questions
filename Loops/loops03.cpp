//display this AP-100,97,94,...upto
//all terms which are positive
// #include<iostream>
// using namespace std;
// int main(){

//   int a,i,n;
//   a=100;
//   for(i=n;i>=1;i--){
//     if(a>0){
//     cout<<a<<endl;
//     a=a-3;
//   }}


//method 2
#include<iostream>
using namespace std;
int main(){

  int a=100;
  for(;a>0;){        //for(i=0;a>0;i++) this also work
    cout<<a<<endl;
    a=a-3;
  }

  return 0;
}