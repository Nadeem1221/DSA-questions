//Sum of all the element in 2D array
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
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
  }
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<arr[i][j]<<" ";

    }cout<<endl;
  }

int arr2[n][m];
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        arr2[j][i]=arr[i][j];
        cout<<arr2[j][i]<<" "; 
    }
    cout<<endl;
  }
  return 0;
}