//Find th first occurence of the element in the sorted array (index)
#include<iostream>
using namespace std;
int main(){

 int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
 int n=13;
 int x=4; // target elemeent find the first occurence of 3 in th given array
 int lo=0;
 int hi = n-1;

bool flag = false; //element is not present in the array
 while(lo<=hi){
     int mid = lo + (hi-lo)/2;

    if(arr[mid]==x){
        if(arr[mid-1]==x) hi = mid -1;
        else {
            cout<<mid;
            flag=true;
            break;
    }   
    }
    else if(arr[mid]<x) lo = mid +1;
    else hi = mid-1;

 }
  if(flag==false) cout<<"Element is not present in the array";

  return 0;
}