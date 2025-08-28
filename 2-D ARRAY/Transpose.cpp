#include<iostream>
using namespace std;
int main(){

  int m,n;
  cout<<"Enter the number of row";
  cin>>m;
  cout<<"Enter the number of columns";
  cin>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];

    }
  }
 
  int arr2[n][m];
  for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
     arr2[i][j]=arr[j][i];   
        }cout<<endl;
  }
  for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
     cout<<arr2[i][j]<<" ";   
        }cout<<endl;
  }
  
  
  


  return 0;
}