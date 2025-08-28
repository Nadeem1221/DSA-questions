/*if cost price and selling price of an item is input through the keyboard
write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.
*/
#include<iostream>
using namespace std;
int main(){
        int x,y;
        cout<<"Enter cost price X";
        cin>>x;
        cout<<"Enter selling price y";
        cin>>y;
        if(x>y){
            cout<<"loss of :"<<x-y<<"Rs";
        }
        if(x==y){
            cout<<"No profit no loss";
        }
        else{
            cout<<"profit of :"<<y-x<<"Rs";
        }


}