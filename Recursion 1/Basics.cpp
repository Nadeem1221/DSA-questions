#include<iostream>
using namespace std;
int fact(int n){
   //base case
   if(n==1 || n==0) return 1;
   // recursive call
   int factorial = n*fact(n-1);
   return factorial;
}

int main(){

   cout<<fact(4);


  return 0;
}