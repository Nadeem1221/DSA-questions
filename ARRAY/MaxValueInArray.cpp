//Find the maximum value out of all elements in the array
// #include<iostream>
// using namespace std;
// int main(){

//   int n;
//   cout<<"Enter the size of the array";
//   cin>>n;
//   int arr[n];
 
//  cout<<"Enter the elements of array";
//   for(int i=0;i<=n-1;i++){
//     cin>>arr[i];
//   }
//   int max=arr[0];
//   for(int i=1; i<=n-1;i++){
//     if(max < arr[i])
//     max=arr[i];
//   }
//   cout<<max;

//   return 0;
// }
//find the minimum element in the given array 
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of the array";
  cin>>n;
  int arr[n];
 
 cout<<"Enter the elements of array";
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }
  int min=arr[0];            // int min=INT_MIN  and include #include<climits>
  for(int i=1; i<=n-1;i++){
    if(min > arr[i])
    min=arr[i];
  }
  cout<<min;

  return 0;
}