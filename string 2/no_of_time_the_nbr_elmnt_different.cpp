#include<iostream>
#include<string>
using namespace std;
int main(){
   
   cout<<"Enter the string";
   string s;
   cin>>s;
   int n = s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(n==1 ){
            break;
        }
        if(n==2 && s[i]!=s[i+1]){
              count=1;
              break;
        }
        if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if( s[i]!=s[i+1] && s[i]!=s[i-1]){
             count++;
        }
        else {
           if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }}
    }  
    cout<<count;

  return 0;
}
