//Quick sort --->worst case O(n2) average case O(n logn)
#include<iostream>
using namespace std;

int partion(int arr[], int si , int ei){
   int count = 0; //place the pivot st idx at right position , no. of element smaller than pivot 
  
    int pivotElement = arr[(si+ei)/2];           // int pivotElement = arr[si]; //make first element as pivot 
    for(int i=si+1 ; i<=ei ;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }

    int pivotIdx = count +si ; //right place of pivot element
     


    swap(arr[(si+ei)/2],arr[pivotIdx]);  

    //arrang the number less than pivot to left and greater number to right side

    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        
        if(arr[i]>pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }else if(arr[i]<pivotElement){
            i++;
        }else if(arr[j]> pivotElement){
            j--;
        }
    }

    return pivotIdx;


}

void quicksort(int arr[],int si , int ei){
   
   if(si>=ei) return;

  int pivotIdx =   partion(arr,si,ei); //find the pivot element and arrang the element smaller left and biiger right to the pivot element
  

  quicksort(arr,si,pivotIdx-1);
  quicksort(arr,pivotIdx+1,ei);
}

int main(){

    int arr[] = { 5,1,8,2,7,6,3,4};
    int  n = sizeof(arr)/sizeof(arr[0]);

   for(int i=0;i<n;i++){ //arr befor sorting
    cout<<arr[i]<<" ";
   }
//    int si = 0;
//    int ei = n-1;

   quicksort(arr,0,n-1);

   cout<<endl;
   for(int i=0;i<n;i++){ //arr after sorting
    cout<<arr[i]<<" ";
   }
 }