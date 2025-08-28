#include<iostream>
#include<vector>
using namespace std;
int main(){

  int n,m;
  vector<int>v1;
  v1.push_back(1);
  v1.push_back(4);
  v1.push_back(5);
  v1.push_back(8);
  v1.push_back(9);
  v1.push_back(10);
  v1.push_back(11);
 

vector<int>v2;
v2.push_back(2);
v2.push_back(3);
v2.push_back(6);
v2.push_back(7);
 m=v1.size();
 n=v2.size();
vector<int>v3(m+n);
int i=0;   //v1 m
int j=0;   //v2 n
int k=0;  //v3

while(i<=m-1 && j<=n-1){
    if(v1[i]<=v2[j]) {
        v3[k]=v1[i];
        i++;
        
    }
    else {
        v3[k]=v2[j];
        j++;
        
} k++;
}
//remaining elements in v2
if(i==m){
    while(j<=n-1){
        v3[k]=v2[j];
        j++;
        k++;
    }
}
//remaining element in v1
 else  {
    while(i<=m-1){
        v3[k]=v1[i];
        i++;
        k++;
    }
}

 
for(int k=0;k<=v3.size()-1;k++){
    cout<<v3[k]<<" ";
}
}