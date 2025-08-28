//find the second largest element in the given array
#include<iostream>
#include<climits>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of the array";
  cin>>n;
  int arr[n];

  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }

  int max=INT_MIN;
  for(int i=0;i<=n-1;i++){
    if(max<arr[i])
    max=arr[i];
  }

  int secondMax=INT_MIN;
  for(int i=0;i<=n-1;i++){
    if(secondMax < arr[i] && arr[i]!=max)
    secondMax= arr[i];   }
    cout<<secondMax;

  return 0;
}