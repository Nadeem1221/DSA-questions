#include<iostream>
using namespace std;
void find(int n,int* ptr1 ,int* ptr2){
    *ptr2=n%10;   //Last digit
    while(n>9){
        n/=10;
    }
    *ptr1=n;
}
int main(){

  int n;
  cout<<"Enter the number ";
  cin>>n;
  int FirstDigit, lastDigit;
  int* ptr1=&FirstDigit;
  int* ptr2=&lastDigit;

  find(n,ptr1,ptr2);
  cout<<"First digit is "<<*ptr1<<endl;
  cout<<"Last digit is "<<*ptr2;


  return 0;
}