//WAP to find the smallest missing positive element in the sorted Array that contains only positive 
//elements.
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cout<<"Enter the size of array";
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int x=0;
   for(int i=0;i<n;i++){
    if(arr[i]!=x){
      cout<<x<<endl;
      break;
    }
    else x++;
      
   }


  return 0;
}