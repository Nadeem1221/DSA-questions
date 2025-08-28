/*input the number from 0 to 9;and return the index of string
has the maximum value */ 
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
  string str="0123 0023 456 00182 940 2901";
  stringstream ss(str);
  string temp;
  
  vector<int> v;
  while(ss>>temp){
    v.push_back( stoi(temp));
  }
 
  int maxvalue=0;
 for(int i=0;i<v.size();i++){
   
    if(v[i]>v[i-1]){
        maxvalue=v[i];  
  }

 }
 
 cout<<"Maxvalue is : "<<maxvalue;
 

  
  return 0;
}
