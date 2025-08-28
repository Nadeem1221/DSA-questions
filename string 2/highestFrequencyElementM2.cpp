//by creatring a 26 size of array of default value 0 
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){

  string s="leetcodedd";
  vector<int> v(26,0); 
  //update the value
  for(int i=0;i<s.size();i++){
    char ch=s[i];
    int ascii= (int)ch;
    v[ascii-97]++;
  }
 // find the max
 int max=0;
 for(int i=0;i<26;i++){
      int count =0;
      if(v[i]>max) max=v[i]; 
 }
 //find the element
 for(int i=0;i<26;i++){
    if(v[i]==max){
        int ascii = i + 97;
        char ch= (char)ascii;
        cout<<ch<<" "<<max<<endl;
    }
 }
 
  return 0;
}