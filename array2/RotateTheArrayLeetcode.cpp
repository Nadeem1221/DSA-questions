// Rotate the given array 'a' by k steps where k is non negative.

   
#include<iostream>
#include<vector>
using namespace std;
int display(vector<int>&v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
void reverse(int i,int j,vector<int>&a){
     while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
     }
}
  int main(){
    int n,k;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"Enter the no. of steps";
    cin>>k;


    vector<int>v;
    for(int i=0 ; i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(k>n) k=k%n;         //if k=n rotated array will be same , if k>n n time pr to arr same hai 


    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    display(v);
    return 0;
    


  return 0;
}