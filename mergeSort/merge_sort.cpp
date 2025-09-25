#include<iostream>
#include<vector>
using namespace std;


void mergeTwoSortedArray(vector<int>a,vector<int>b,vector<int>&res) {
    int i=0;
    int j=0;
    int k=0;
     while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) {
            res[k++]=a[i++];
        }else{
            res[k++]=b[j++];
        }
     }

    if(i==a.size()){
     while(j<b.size()) res[k++]=b[j++];
    }else{
        while(i<a.size()) res[k++] =a[i++];
    }
    

}

void mergeSort(vector<int> &v){
 
   int n= v.size();
    if(n==1) return ; //Base case
   int n1 = n/2;
   int n2 = n-n1;

   int arr1[n1];
   for(int i=0;i<n1;i++){
    arr1[i]=v[i];
   }
   

   int arr2[n2];
   for(int i=0;i<n2;i++){
    arr2[i]=v[n1+i];
   }
   vector<int>a(arr1,arr1+n1);
   vector<int>b(arr2,arr2+n2);

   mergeSort(a);
   mergeSort(b);

   mergeTwoSortedArray(a,b,v);

   a.clear(); //delete extra array to improve space complexity from o(n log n ) to o(n);  
   b.clear();


}

int main(){
    
  int arr[]={5,8,5,3,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  //make a copy of arr in vector v
  vector<int>v(arr,arr+n);
  for(int i=0;i<v.size();i++){  //original array
    cout<<v[i]<<" ";
  }

  mergeSort(v);  
 cout<<endl;
  for(int i=0;i<v.size();i++){ //sorted array
    cout<<v[i]<<" ";
  }

}



//    int arr1[]={1,5,8,9};
   
//    int n=sizeof(arr1)/sizeof(arr1[0]);

//    int arr2[]={2,5,7,8,9,10,19};

//    int m = sizeof(arr2)/sizeof(arr2[0]);

//    int arr3[n+m]; 

//     int i=0; //for arr1
//     int j=0; //for arr2
//     int k=0; //for arr2

//    while(i<n && j<m){
//     if(arr1[i]<arr2[j]){
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }else{
//         arr3[k]  =arr2[j];
//         k++;
//         j++;
//     }
//    }

//    while(k<(m+n)){
//         if(i>=n){
//             arr3[k] = arr2[j];
//             k++;
//             j++;

//         }else{
//             arr3[k] = arr1[i];
//             k++;
//             i++; 
//         }

// }

// for(int i =0;i<n+m;i++){
//     cout<<arr3[i]<<" ";
//    }
  

//using vectors