#include<iostream>
#include<string>
using namespace std;
int mazepath(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1 ; //it means it a possible path 
     int rightways = mazepath(sr,sc+1,er,ec);
     int leftways = mazepath(sr+1,sc,er,ec);
     int totalways  = rightways+leftways;
     return totalways;
}

void printpath(int sr , int sc , int er, int ec, string s){
           if(sr>er || sc>ec) return;
           if(sc==ec && sr==er){
            cout<<s<<endl;
            return;
           }

          printpath(sr,sc+1,er,ec,s+'R');
          printpath(sr+1,sc,er,ec,s+'D');

}
int main(){

   cout<<mazepath(0,0,2,2);
   cout<<endl;

   //print the possible  path
   printpath(0,0,2,2,""); 

}