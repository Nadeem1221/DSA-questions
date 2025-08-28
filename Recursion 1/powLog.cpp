#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return x;
    if(n==0) return 1;
    int ans= pow(x,n/2);
    if(n%2==0){
        
        return ans*ans;
    }
    else{
        
         return ans*ans*x;
    }
}
int main(){
int x=2,n=3;
cout<<pow(x,n);

  return 0;
}


// class Solution {
// public:
    
//     int climbStairs(int n) {
//         if(n==1) return 1;
//        int first=1;
//        int second=2;

//        for(int i=3;i<=n;i++){
//         int current=first+second;
//          first=second;
//          second=current;
//        }
//        return second;
     
//     }
// };