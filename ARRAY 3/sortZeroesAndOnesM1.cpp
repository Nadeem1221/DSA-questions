
#include<iostream>
#include<vector>
using namespace std;
//by two pass method
void sort01(vector<int>&v){
   int n=v.size();
   int NOZ=0;      //NOZ->no. of zeroes,Noo->no. of ones
   int NOO=0;
   for(int i=0;i<n;i++){
       if(v[i]==0){
        NOZ++;
       }
       else {
        NOO++;
       }
   }
   for(int i=0;i<n;i++){
    if(i<NOZ)
    v[i]=0;
    else v[i]=1;
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
   sort01(v);
   
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }

}