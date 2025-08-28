#include<iostream>
using namespace std;
int factorial(int x){
    int i;
    int fact=1;
    for( i=1 ;i<=x ;i++){
        fact*=i;      
    }
    return fact;
}



int main(){
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
   int nfact= factorial(n);
   int rfact=factorial(r);
   int nrfact=factorial(n-r);
   int nPr= nfact/nrfact;
   int nCr=nfact/(rfact*nrfact);
   cout<<"Permutation is :"<<nPr<<endl;
   cout<<"combination is :"<<nCr;

   
    


}