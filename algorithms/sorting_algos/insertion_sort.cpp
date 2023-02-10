#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1,8,2,5,3,7};
    for(int step =1;step<vec.size();step++){
        int key = vec[step];
        int j = step-1;

        while(key<vec[j] && j>=0){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = key;
    }
    cout<<"sortd array ";
    for(auto i:vec){
        cout<<i<<" ";
    }

}