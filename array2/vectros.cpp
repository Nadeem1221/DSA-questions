#include<iostream>
#include<vector>     //include this to use vecters
using namespace std;
int main(){

   vector<int>v;
   v.push_back(8);
   cout<<v.size();
   cout<<v.capacity();

   v.push_back(9);
    cout<<v.size();
    cout<<v.capacity();

    v.push_back(10);
    cout<<v.size();
    cout<<v.capacity();
    
    v.push_back(4);
    cout<<v.size();
    cout<<v.capacity();



// cout<<v[0];
// cout<<v[1];



  return 0;
}