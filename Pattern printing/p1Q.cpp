// pattern printing 
#include<iostream>
using namespace std;
int main(){
    int n, m ,i,j;
    cout<<"Enter number of rows n :";
    cin>>n;
    cout<<"Enter number of columns m :";
    cin>>m;
    for( i=1;i<=n;i++){
        for( j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
}