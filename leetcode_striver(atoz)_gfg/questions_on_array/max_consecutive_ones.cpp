//link: https://leetcode.com/problems/max-consecutive-ones/description/
#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
        int ans = 0;
        int max_ans = 0;
        for(int i =0;i<arr.size();i++){
            if(arr[i] ==1){
                ans++;
                max_ans = max(max_ans,ans);
            }
            if(arr[i] == 0){
                ans=0;
            }
        }
    return max_ans;
    }

int main(){
    vector<int> vec = {1,1,0,1,1,1,0};//max consc 1's are - 3
    int ans = findMaxConsecutiveOnes(vec);
    cout<<"number of max consecutive 1's are : "<<ans;
}