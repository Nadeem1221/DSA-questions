#include<iostream>
using namespace std;
int main(){

  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  int n= sizeof(arr)/sizeof(arr[0]);

  //find pre fix sum and store in above array
 
 bool check=false; //partition is not possible

  for(int i=1;i<n;i++){
    arr[i] = arr[i-1] + arr[i];

  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
  int x=1;
  while(x<n-1){
    if(2*arr[x]==arr[n-1]){
        check=true;
        break;
    }
    else{
        x++;
    } 
  }
  cout<<endl;

  if(check==true){
    cout<<"partition is possibel at index:" <<x<<endl;
  }else{
    cout<<" partition is not possible";
  }

  

  return 0;
}