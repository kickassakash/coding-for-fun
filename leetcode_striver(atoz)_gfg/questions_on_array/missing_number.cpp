//link::https://leetcode.com/problems/missing-number/description/
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {

        //using math
        // int sum = 0;
        // int size = nums.size();
        // int ap_sum = (size*(size+1))/2;
        // for(int i:nums){
        //     sum+=i;
        // }
        // return ap_sum-sum;

        //using xor --
        int res = nums.size();
        for(int i=0; i<nums.size(); i++){
            res ^= i;
            res ^= nums[i];
        }
        return res;
    }

int main(){

}