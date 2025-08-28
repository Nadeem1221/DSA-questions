//find transpore without using any extra space (don't just print)
#include<iostream>
using namespace std;
int main(){
    int n;
  cout<<"Enter the size of array";
  cin>>n;
  int arr[n][n];       //square matrix
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
  
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=arr[i][j]; 
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;

            }
    
  } cout<<endl;
   //print the final matrix
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
  }



  return 0;
}