//link:https://leetcode.com/problems/top-k-frequent-elements/description/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    struct mycomp{
        bool operator()(pair<int,int>a,pair<int,int>b){
            return a.second<b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<int> elem;
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomp> pq;
        map<int,int> mapper;
        for(int i:nums){
            mapper[i]++;
            elem.insert(i);
        }
        for(int i:elem){
            pq.push(make_pair(i,mapper[i]));
        }
        for(k;k>0;k--){
            int temp = pq.top().first;
            ans.push_back(temp);
            pq.pop();
        }
        return ans;
    }
};

int main(){
    vector<int> vec = {1,1,1,2,2,3};
    int k = 2;
    Solution sol;
    vector<int> ans = sol.topKFrequent(vec,k);
    cout<<"top "<<k<<" frequency holding elements are : ";
    for(int i:ans){
        cout<<i<<" ";
    }
}