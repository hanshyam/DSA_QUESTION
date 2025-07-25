#include<bits/stdc++.h>
using namespace std;
 
int find(vector<int>& arr) {
   int ans = INT_MIN;
   for(int i = 0;i<arr.size();i++){
     ans = max(ans,arr[i]);
   }
   return ans;
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    cout<<"The Largest element in the array is: "<<find(arr1)<<endl;
   
    return 0;
}