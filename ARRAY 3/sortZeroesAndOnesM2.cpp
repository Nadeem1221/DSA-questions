//by two pointer method
#include<iostream>
#include<vector>
using namespace std;


void sort02(vector<int>&v){
   int j=v.size()-1;
   int i=0;
   while(i<j){
    if(v[i]==0) i++;
    else if(v[j]==1) j--;  //we can aslo use else if instead of if
    else if (v[i]==1 && v[j]==0){      //else if 
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }
    
   }
}
    
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
 
   vector<int> v;
   cout<<"Enter the elemnts of the array";
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   sort02(v);
   
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }

}