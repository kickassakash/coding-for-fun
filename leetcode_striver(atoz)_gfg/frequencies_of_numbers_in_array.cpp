//link : https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2,3,2,2,2,2,3,5};
    unordered_map<int,int> mapper;
        for(int i=0;i<vec.size();i++){
            mapper[vec[i]]++;
        }
    // cout<<mapper[2];
    for(int i=0;i<vec.size();i++){
        vec[i] = mapper[i+1];
    }
    cout<<"array with frequency is : ";
    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}