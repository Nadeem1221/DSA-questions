// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2(n square) in spiral order
#include<iostream>
#include<vector>
using namespace std;
int main(){
       int n;
      cout<<"Enter the size (n): ";
      cin>>n;
         vector<vector<int>> v(n, vector<int>(n,0));
        int minr=0 , minc=0;
        int maxr=n-1 , maxc=n-1;
         int k=1;
         while(k<=n*n){
        for(int j=minc;j<=maxc && k<=n*n;j++){
           v[minr][j] =k++;
            
        }minr++;

        for(int i=minr;i<=maxr && k<n*n;i++){
           v[i][maxc]=k++;
        }maxc--;

        for(int j=maxc;j>=minc && k<n*n;j--){
            v[maxr][j]=k++;
        }maxr--;

        for(int i=maxr;i>=minr && k<n*n;i--){
            v[i][minc]=k++;
        }minc++;
        
         }
     
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
     }
    
    
};
