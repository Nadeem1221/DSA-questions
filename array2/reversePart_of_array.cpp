//reverse the selected part of the array
#include<iostream>
#include<vector>
using namespace std;
int display(vector<int> a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
}

void reverse(int i, int j,vector<int> &a){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

int main(){

  int n;
  cout<<"Enter the size of array";
  cin>>n;
  vector<int>v;
  for(int i=0;i<=n-1;i++){
    int x;
    cin>>x;
    v.push_back(x);  
  }
 int a,b;
  cout<<"Enter the range of index (a,b) :";
  cin>>a>>b;
  reverse(a,b,v);
  display(v);


}