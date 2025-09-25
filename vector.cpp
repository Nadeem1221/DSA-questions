#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    int minIndex = -1, maxIndex = -1;
    for(int i = 0; i < N; i++) {
        if(arr[i] == minVal && minIndex == -1) minIndex = i;
        if(arr[i] == maxVal && maxIndex == -1) maxIndex = i;
    }

    int first = min(minIndex, maxIndex);
    int second = max(minIndex, maxIndex);

    vector<int> part1(arr.begin(), arr.begin() + first + 1);
    vector<int> part2(arr.begin() + first + 1, arr.begin() + second);
    vector<int> part3(arr.begin() + second, arr.end());

    vector<int> newArr;
    newArr.insert(newArr.end(), part2.begin(), part2.end());
    newArr.insert(newArr.end(), part1.begin(), part1.end());
    newArr.insert(newArr.end(), part3.begin(), part3.end());

    for(int x : newArr) cout << x << " ";
    cout << endl;

    return 0;
}

// #include<iostream>
// #include<vector>
// #include <algorithm>

// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the size of vector ";
//   cin>>n;

// //   vector<int> vec;

// //   for(int i=0;i<n;i++){
// //     int x;
// //     cout<<"Enter the elemnt of vector";
// //     cin>>x;
// //     vec.push_back(x);
// //   }
  
// //   reverse(vec.begin(),vec.end());

// //   cout<<endl;

// //   for(int i=0;i<n;i++){
// //     cout<<vec[i]<<" ";
// //   }

// // vecotr<int> vec1 = {10,20,30,50};

// // int sum = accumulate(vec1.begin(),vec1.end(),0);
// // int max = *max_element(vec1.begin(),vec1.end());




//   return 0;
// }