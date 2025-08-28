#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){

   string str="My name is is nadeem.";
   stringstream ss(str);
   string temp;

   vector<string> v;
   while(ss>>temp){
    v.push_back(temp);
   }
   sort(v.begin(),v.end());
   
   int maxcount=0;

   for(int i=1;i<v.size();i++){
        int count=1;
        if(v[i]==v[i-1]) count++;
        maxcount=max(maxcount,count);
   }
    
    for(int i=1;i<v.size();i++){
      int count=1;
      if(v[i]==v[i-1]) count++;
      if(count==maxcount) {
        cout<<v[i]<<" "<<maxcount<<endl;
      }
      
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  //  //finding how many times aword repeat in the sentence
  // int max=0;
  //  for(int i=0;i<v.size();i++){
  //   int count =1;
  //   for(int j=i+1;j<v.size();j++){
  //     if(v[i]==v[j]) count++;
  //     if(max<count) max=count;
  //   }
  //  }
  //  for(int i=0;i<v.size();i++){
  //   int count=1;
  //   for(int j=i+1;j<v.size();j++){
  //     if(v[i]==v[j]) count++;
  //     if(count==max) {
  //       cout<<v[i]<<" "<<max;
  //       break;
  //     }
  //   }
  //  }


  

  return 0;
}