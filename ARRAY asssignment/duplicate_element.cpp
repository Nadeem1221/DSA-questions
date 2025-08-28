// Q4. Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }
    bool flag=false;         //false means array is not containing any duplicate.
  for(int i=0;i<=n-2;i++){     // last element is not include in i
      for(int j=1+i;j<=n-1;j++){  // j=1+i
        
        if(arr[i]==arr[j])
        flag=true;
        break;
    
      }
      if(flag==true)
      break;

     }
    if (flag==false) {cout<<"Array is not containing any  duplicate";}
  else {cout<<"Array contain duplicate";}

  
  

  return 0;
}