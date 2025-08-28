// //vectors are passing through value but not reference
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(vector<int> a){
//    a[0]=100;
//    for(int i=0;i<a.size();i++){
//     cout<<a[i]<<" ";
//    } 
//    cout<<endl;

// }
// int main(){

//  vector<int>v;
//  v.push_back(9);
//  v.push_back(5);
//  v.push_back(7);
//  v.push_back(3);
//  for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
//  } 
//  cout<<endl;
//  change(v);
 
//  for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
//  } 


//   return 0;
// }



//passing through pass by refrence
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){       //& using for pass by refrence
   a[0]=100;

}
int main(){

 vector<int>v;
 v.push_back(9);
 v.push_back(5);
 v.push_back(7);
 v.push_back(3);
 for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
 } 
 cout<<endl;
 change(v);
 
 for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
 } 


  return 0;
}