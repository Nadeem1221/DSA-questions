#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintSubset(string ans,string original,vector<string>&v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    PrintSubset(ans,original.substr(1),v);
    PrintSubset(ans+ch,original.substr(1),v);
}
int main(){
    string str="aba";
    vector<string>v;
    PrintSubset("",str,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
}
