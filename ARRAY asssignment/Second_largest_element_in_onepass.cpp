//second largest element in one pass. 
#include<iostream>
#include<climits>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of the array ";
  cin>>n;
  int arr[n];

  for(int i=0;i<=n-1;i++){
    cin>>arr[i];

  }
  int max1=INT_MIN;
  int max2=INT_MIN;

 for(int i=0;i<=n-1;i++){
     if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
     }
       

 }
      cout<<max2;
      
  return 0;
}