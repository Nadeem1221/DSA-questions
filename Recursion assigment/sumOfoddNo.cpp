//sum of odd number between a and b including a and b 
#include<iostream>
using namespace std;
int sum(int a,int b,int &add){
    if(a>b) return -1 ;
    if(a==b){
        if(a%2!=0){
            add+=a;
            return -1;
        }
    
    }
    if(a%2!=0){
        add+=a;
        sum(a+2,b,add);

    }
    else {
        sum(a+1,b,add);
        
    }
}

int main(){
   int a,b;
  cout<<"Enter a and b";
  cin>>a>>b;
  int add=0;
  if(a>b) swap(a,b);

  sum(a,b,add);
  cout<<add;


  return 0;
}