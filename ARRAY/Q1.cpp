/*given an array of marks of student ,if the 
marks of any student is less than 35 print its roll number.
[roll number refers to the index of the array]
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of student : ";
    cin>>n;

  int mar[n];                //0 to n-1
  cout<<"Enter marks ";
  for(int i=0;i<=(n-1);i++){
    cin>>mar[i];
  }
  for(int i=0;i<=(n-1);i++){
    if(mar[i]<35){
        cout<<i<<" ";
    }

  }

  return 0;
}