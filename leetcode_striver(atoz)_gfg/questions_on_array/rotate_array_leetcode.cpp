#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    vec = {1,2,3,4};
    unordered_map<int,int> mapper;
    reverse(vec.begin(), vec.end());
    for(int i:vec){
        cout<<i<<" ";
    }
    for(int i:vec){
        mapper[i]++;
    }
    cout<<mapper.size();
}