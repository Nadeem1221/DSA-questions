//count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main(){

   int n;
   cout<<"Enter the size of array";
   cin>>n;
   int arr[n];

   for(int i=0;i<=n-1;i++){
    cin>>arr[i];
   }
     int x;
     cout<<"Enter the number x : ";
     cin>>x;

     int count=0;
   for(int i=0;i<=n-1;i++){
    if(arr[i]>x)
    count+=1;
    

    
   }
  cout<<count;


  return 0;
}