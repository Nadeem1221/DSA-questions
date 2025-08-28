#include<iostream>
using namespace std;
int main(){
  //by binary search
  int arr[]={1,2,4,5,9,15,18,21,24};
  int n=9;
  int x=12; //target element
  int lo=0;
  int hi=n-1;
  
  bool flag=false; //the exact elemnt is not present in the array
  while(lo<=hi){
    int mid = lo + (hi-lo)/2; 
      if(arr[mid]==x){
        cout<<arr[mid-1];
        flag = true;
        break;
      }     
     else if(arr[mid]<x){
         lo = mid+1;
     }
    
     else if(arr[mid]>x){
         hi = mid-1; 
     }

  }
  if(flag==false){
    cout<<arr[hi];
  }
  
  
  
  
  
  
  //METHOD 1
  //this is normal method TIME COMPLEXITY is O(n).
  // int arr[]={1,2,4,5,9,15,18,21,24};
  // int n=9;
  // int x=9;
  // for(int i=0;i<n;i++){
  //   if(arr[i]>x){
  //       cout<<arr[i-1];
  //       break;
  //   }
  // }


  return 0;
}