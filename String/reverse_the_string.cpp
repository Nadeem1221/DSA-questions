
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

  cout<<"Enter the string";
  string s;
  cin>>s;
  int n ;
  n=s.size();
  reverse(s.begin() + 0 ,s.begin() + n/2);
  cout<<s;

  return 0;
}