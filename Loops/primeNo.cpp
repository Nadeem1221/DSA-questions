//prime no. or not
// #include<iostream>
// using namespace std;
// int main(){

//   int n,i;
//   cout<<"Enter the number";
//   cin>>n;
//   for(i=2;i<=(n-1);i++){
//     if(n%i==0){
//      cout<<n<<" is composite number";
//      break;}

//      else {
//     cout<<n<<" is prime number";
//     break;}

//   }


  

//   return 0;
// }



#include<iostream>
using namespace std;
int main(){

  int i,n;
  cout<<"Enter the number";
  cin>>n;
  bool flag=true;  //no. is prime 
  for(i=2;i<=n-1;i++){
    if(n%i==0){
     flag=false ;  //number is not prime
    
    break;
    }

  }
  if(n==1) cout<<n<<" is neither prime not composite";
  else if (flag==true) cout<<n<<" is prime";
  else cout<<n<<" is not prime";
  



}