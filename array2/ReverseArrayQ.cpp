// //write a program to copy the content of one array into another 
// //array in the reversed order
// #include<iostream>
// #include<vector>
// using namespace std;
// int display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array";
//     cin>>n;
//     cout<<"Enter elements of array ";
//     vector<int>v1;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v1.push_back(x);
//     }
//     display(v1);

//     vector<int>v2(v1.size());
//     for(int i=0;i<v2.size();i++){
//       //i+j=v2.size();
//       int j=v2.size()-1-i;
//       v2[j]=v1[i];          //v1[v2.size()-1-i;]
//     }
         
//     display(v2);   

    
// }

//wAP to reverse the array without using any extra array.
#include<iostream>
#include<vector>
using namespace std;
int display(vector<int>&a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i];
    }
    
}
int main(){

  int n;
  cout<<"Enter the size of array";
  cin>>n;
  vector<int>v;
  for(int i=0;i<=n-1;i++){
    int x;
    cin>>x;
    v.push_back(x);  
  }
  // //by while loop 
  //  int j=v.size()-1;
  //  int i=0;
//  while(i<=j){
//   int temp=v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//   }

//by for loop

for(int i=0, j=v.size()-1;i<=j;i++,j--){
  int temp=v[i];
  v[i]=v[j];
  v[j]=temp;
}

  display(v);
   
    return 0;
}