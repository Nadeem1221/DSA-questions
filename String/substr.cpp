#include<iostream>
#include<string>
using namespace std;
int main(){

  cout<<"Enter the string";
  string str;
  cin>>str;
   int n=str.size();
   cout<<str.substr(n/2);
   

  return 0;
}