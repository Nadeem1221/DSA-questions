//find wheather the number given by user is present in array or not.
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element you want to search in the array :";
    cin>>x;
    //check mark 
    bool flag=false ;  //  false means element is not present in the array
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) 
        flag=true;
    }
    if(flag==true) cout<<"Element is present";
    else cout<<"Element is not present";
            
           
    

    

  return 0;
}