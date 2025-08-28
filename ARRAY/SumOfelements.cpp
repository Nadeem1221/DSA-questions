//Calculate the sum of all the elements in the given array
#include<iostream>
using namespace std;
int main(){
   int n;
   int sum=0;
   cout<<"Enter number of elements in array";
   cin>>n;
  int arr[n];
  for(int i=0;i<=(n-1);i++){
    cin>>arr[i];

  }
  for(int i=0;i<=(n-1);i++){
      arr[i];
      sum+=arr[i];
    

  }
      cout<<sum;
  return 0;
}