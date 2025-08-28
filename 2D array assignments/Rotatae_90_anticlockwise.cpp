//Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include<iostream>
using namespace std;
int main(){

  int n;
  cout<<"Enter the size square matrix";
  cin>>n;

  
  int a[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
  }
  //transpose
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
    cout<<endl;
  }
  //reverse the columns
  int i=0;
  int j=n-1; 
 for(int k=0;k<n;k++){ 
      
            while(i<j){
            int temp=a[i][k];
            a[i][k]=a[j][k];
            a[j][k]=temp;
            i++;
            j--;
        }
 }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<endl;
  }


  return 0;
}