#include<iostream>
#include<climits>
using namespace std;

void printmax(int arr[],int n , int idx, int mxm){
    if(idx==n){
        cout<<mxm;
        return;
    }
     
    if(mxm<arr[idx]) mxm=arr[idx];
    printmax(arr,n,idx+1,mxm);

}

int main(){
    int arr[]={5,6,7,2,8,9,32,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printmax(arr,n,0,INT_MIN);


}

//method 2
maxinarray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;       //ex->{1,5,2,3} in last max(3,INT_MIN )-> 3
    return max(arr[idx],maxinarray(arr,n,idx+1));
}