#include<iostream>
using namespace std;
int main(){

  int m,n,p,q;
  cout<<"Enter the no. of rows of 1st matrix (a)";
  cin>>m;
  cout<<"Enter the no. of columns of 1st matrix(a)";
  cin>>n;
  cout<<"Enter the no. of rows of 2nd matrix(b)";
  cin>>p;
  cout<<"Enter the no. of columns of 2nd matrix(b)";
  cin>>q;
  
if(n==p){
//taking input from the user 
int a[m][n];
cout<<"Enter 1st matrix (a) ";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
cout<<"Enter 2nd matrix(b)";
int b[p][q];
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cin>>b[i][j];
    }
}
//create 3rd matrix to store the multiplication of two matrices
 int res[m][q];
 for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
         res[i][j]=0;
        for(int k=0;k<p;k++){
        res[i][j] += a[i][k]*b[k][j];
    }}
 }

for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<res[i][j]<<" ";
    }cout<<endl;
}

}
else{
    cout<<"The matrices can't be multiplied";
}
  return 0;
}