#include<iostream>
using namespace std;

void merge(int arr1[],int arr2[],int res[],int n1,int n2){
    int i=0; //arr1
    int j=0; //arr2
    int k=0; //res
    while(i<n1 && j<n2){
        if (arr1[i]<arr2[j]){
            res[k++]=arr1[i++];
            
        }
        else{
            res[k++]=arr2[j++];
        }
        
    }
    if(i>=n1){
        res[k++]=arr2[j++];
    }
    else if (j>=n2){
        res[k++]=arr1[i++];
    }
    

}
int main(){
    int arr1[]={2,4,6,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={3,5,7,9};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int res[n1+n2];
    merge(arr1,arr2,res,n1,n2);
    for(int k=0;k<n1+n2;k++){
        cout<<res[k];
    }

}