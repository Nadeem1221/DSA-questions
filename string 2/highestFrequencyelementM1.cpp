#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s="nadeem";
int n=s.size();        //this is not good method
     //times a element occurs
     int max=0;
     for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) count++;
        }
        if(max<count) max=count;
     }
    //which element
    for(int i=0;i<n;i++){
        char ch = s[i];
        int count =1;
        for(int j=i+1;j<n;j++){
            if(s[j]==s[i]) count++; 
            } 
        
        if(count==max){
                cout<<ch<<" "<<max;
           }
    }

    
  return 0;
}