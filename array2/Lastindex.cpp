//find the last occurrence of x in the array
#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int>v;
  v.push_back(9);
  v.push_back(10);
  v.push_back(12);
  v.push_back(10);
  v.push_back(9);

  int x=9;
  int index=-1;
//   for(int i=0;i<v.size();i++){
//     if(v[i]==x) index=i;
//   }
for(int i =v.size()-1; i>=0;i--){
    if(v[i]==x) {
        index=i;
        break;
    }

    
}
  
  
  cout<<index;
  
}