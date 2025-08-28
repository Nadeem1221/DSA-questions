#include<iostream>
using namespace std;
void print(int x){
    //base case
    if(x==0) return;
    cout<<x<<endl;
    // recursive case
    print(x-1);

}
int main(){

  print(5);

  return 0;
}