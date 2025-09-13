#include<bits/stdc++.h>
using namespace std;

    int maxFreqSum(string s) {
        unordered_map<char,int>alpha;
        for(char ch : s){
            alpha[ch]++;
        }
        int maxV = 0,maxC = 0;
        for(auto it : alpha){
           if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u'){
             if(it.second>maxV){
                maxV = it.second;
             }
           }
           else{
              if(it.second>maxC){
                maxC = it.second;
              }
           }
        }
        return (maxV + maxC);
    }


 
int main() {
     string s = "successes";
     int ans = maxFreqSum(s);

     cout<<ans<<endl;
   
    return 0;
}