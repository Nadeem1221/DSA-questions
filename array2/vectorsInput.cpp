#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n;
 cout<<"Enter the size of vecter";
 cin>>n;
 vector<int>v; 
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }

  for(int i=0;i<n;i++){
    cout<<v[i];          //or v.at(i);
  }

  return 0;
}