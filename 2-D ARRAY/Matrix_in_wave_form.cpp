//print the matrix in wave form
#include<iostream>
using namespace std;
int main(){
    int m,n;
cout<<"Enter the no. of rows(m)";
cin>>m;
cout<<"Ener the nummber of columns(n)";
cin>>n;
int a[m][n];
//input from the user
cout<<"Enter the elements of matrix";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
//method 1
//reverse the even rows  humnse print nhi convert kri hai matrix 
for(int k=0;k<m;k++){
    if(k%2!=0){
       int i=0;
       int j=n-1;
       while(i<j){
       int temp=a[k][i];
       a[k][i]=a[k][j];
       a[k][j]=temp;
       i++;
       j--;
       } 
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";

    }cout<<endl;
}

  return 0;
}

//wave print method 2(simple and effective )       //just print the matrix
// for(int i=0;i<m;i++){
//     if(i%2==0){
//        for(j=0;j<n;j++){
//         cout<<arr[i][j]<<" ";
//        }
//     }
//     else{
//            for(j=n-1;j>=0;j--){
//             cout<<a[i][j]<<" ";
//            }
//     }
// }

