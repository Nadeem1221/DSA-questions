//print from 1 to N
//taking the two parameters as arrgument
#include<iostream>
using namespace std;
void print(int i,int x){
   if(i>x) return;
   cout<<i<<endl;
   print(i+1,x);
}
int main(){

print(1,5);

  return 0;
}
