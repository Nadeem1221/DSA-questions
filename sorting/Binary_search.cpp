#include<iostream>
using namespace std;
int main(){

  int arr[]={1,2,3,4,5,9,10};
  int target = 10;
  // int length = sizeof(arr)/sizeof(arr[0]);


  int lo = 0;
  int hi = 6;
  int index=-1;
  bool flag = false;//target is not present in the array
  
  while(lo<=hi){
    int mid = (lo + hi)/2;

    if( arr[mid]==target){ 
       index=mid;
       flag=true;
       break;
    }

    if(arr[mid]>target) hi=mid-1;
    if(arr[mid]<target) lo=mid+1;
  }

  if(flag==true){
    cout<<"Element is present in the array";
    cout<<index;
  }
  else{
    cout<<"Element is not present";
    cout<<index<<"index is not present";
  }


  return 0;

  }