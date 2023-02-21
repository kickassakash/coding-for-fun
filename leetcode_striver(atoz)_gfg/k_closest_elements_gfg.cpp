#include<bits/stdc++.h>
using namespace std;

struct mycomp{
        bool operator()(pair<int,int>a,pair<int,int>b){
            return a.second>b.second;
        }
    };
    
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        vector<int>vec;
        vector<pair<int,int>> pairer;
        for(int i:arr){
            pairer.push_back(make_pair(i,abs(x-i)));
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomp> pq(pairer.begin(),pairer.end());
        while(k--){
            //cout<<"top elem : "<<pq.top().second<<" ";
            vec.push_back(pq.top().first);
            pq.pop();
        }
        return vec;
        
    }

int main(){
    // int arr[] = {100,80,10,5,70};
    // priority_queue<int,vector<int>,greater<int>> pq(arr,arr+5);
    // //make_heap(arr,arr+6,greater<int>());
    // pq.push(15);
    // cout<<pq.size()<<endl;
    // for(int i){
    //     cout<<i<<" ";
    // }
    vector<int> vec= {12 ,16 ,22 ,30 ,35 ,39 ,42 ,45 ,48 ,50 ,53,55,56};
    int x = 35,k=4,n=vec.size();
    vector<int> ans = printKClosest(vec,n,k,x);
    for(int i:ans){
        cout<<i<<" ";
    }
}