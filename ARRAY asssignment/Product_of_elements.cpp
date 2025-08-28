//product of element of array
#include<iostream>
using namespace std;
int product_of_array(int arr[],int n){
    int product=1;
    for(int i=0;i<=n-1;i++){
      product*=arr[i];
    }
    return product;




}


int main(){

  int n;
  cout<<"Enter the size of array";
  cin>>n;
  int arr[n];
   
   for(int i=0;i<=n-1;i++){
    cin>>arr[i];
   }
   cout<< product_of_array( arr,n);

   return 0;


}