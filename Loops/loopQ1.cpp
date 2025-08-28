//WAP to count digits of a given number?      *Zero is aslo a digit  
#include<iostream>
using namespace std;
int main(){
     
      int n,count;
    
      cout<<"Enter the number";
      cin>>n;
       count=0;
       int a=n;
       while(n>0){
        n=n/10;
        count++;

       }
       if(a==0) cout<<1;
          else cout<<count;

      
  return 0;
}