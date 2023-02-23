//link: https://leetcode.com/problems/intersection-of-two-arrays/description/
/*
procedure we followed to solve the problem is - we use hashmap to store both arrays
unique elements and check if the unique elements of one array is present in another
array or not. if present we put it in the vector and return. time complexity is O(n)
and space complexity is O(n+m) as we have to store all values in unordered maps.
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        unordered_map<int,int> mapper1;
        unordered_map<int,int> mapper2;
        for(int i:nums1){
            mapper1[i]++;
        }
        for(int j:nums2){
            mapper2[j]++;
        }
        int size = max(mapper1.size(),mapper2.size());
        if(mapper1.size()>mapper2.size()){
            for(auto it:mapper1){
                if(mapper2[it.first] != 0){
                    vec.push_back(it.first);
                }
            }
        }
        else{
            for(auto it:mapper2){
                if(mapper1[it.first] != 0){
                    vec.push_back(it.first);
                }
            }
        }
        return vec;
}

int main(){
    vector<int>vec1 = {1,2,2,1},vec2 = {1,2};
    vector<int> ans = intersection(vec1,vec2);
    cout<<"intersection of two arrays : ";
    for(auto it:ans){
        cout<<it<<" ";
    }
}