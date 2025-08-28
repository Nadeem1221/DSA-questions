//print the both diagonal of the given 2D square matirx
#include<iostream>
using namespace std;
int main(){
    int n;
  cout<<"Enter the dimensions of the square matrix";
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];

    }
  }
  //printing the diagonal elemnts
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){

        if(i==j || i+j==n-1){
            cout<<a[i][j]<<" ";
        }
        else {
            cout<<" ";
        }  
    }
    cout<<endl;
   
  }

    
  return 0;
}