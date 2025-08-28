#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintSubset(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return; //taki niche ki do condition na chale
    }
    char ch=original[0];
   if(original.length() == 1){
     if(flag==true) PrintSubset(ans+ch,original.substr(1),v,true);  //left call agar flag false hai to left call nhi lagani
          PrintSubset(ans,original.substr(1),v,true);
          
          return;
   }

   char dh=original[1]; //second element of original string
   if(ch==dh){   //duplicate , right bale me false bhej do 
      if(flag==true) PrintSubset(ans+ch,original.substr(1),v,true);  //left call agar flag false hai to left call nhi lagani
          PrintSubset(ans,original.substr(1),v,false);
   }
   else{ //no duplicate
           if(flag==true) PrintSubset(ans+ch,original.substr(1),v,true);
          PrintSubset(ans,original.substr(1),v,true);
   }
}
int main(){
    string str="aaabbc";
    vector<string>v;
    PrintSubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
