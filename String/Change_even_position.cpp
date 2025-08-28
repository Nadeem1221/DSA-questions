#include<iostream>
#include<string>
using namespace std;
int main(){

//   int n;
//   cout<<"Enter the size of sttring ";
//   cin>>n;
//   char str[n];
//   for(int i=0;i<n;i++){
//     cin>>str[i];
//   }
//   for(int i=0;i<n;i++){
//     if(i%2!=0) str[i]='a';
//   }
cout<<"Enter the string";
string s;
getline(cin,s);

for(int i=0;i<s[i]!='\0';i++){
    if(i%2!=0){
        s[i]='a';
    }
}

cout<<s;


  return 0;
}