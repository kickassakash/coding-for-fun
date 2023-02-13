#include<bits/stdc++.h>
using namespace std;
//iterative implementation --> time complexity O(n^2) || spaec complexity O(1)
vector<int> bubble_sort_iterative(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        int swapped = 0;
        for(int j=0;j<vec.size()-1-i;j++){
            if(vec[j]>vec[j+1]) swap(vec[j],vec[j+1]);
            swapped = 1;
        }
        if(swapped ==0){
            break;
        }
    }
    return vec;
}
//recursive implementation --> time complexity O(n^2) || space complexity O(n)
void bubble_sort_recursive(int arr[],int n){
    if (n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubble_sort_recursive(arr,n-1);
}

int main(){
    vector<int> vec = {5,4,3,2,1,0};
    vector<int> ans = bubble_sort_iterative(vec);
    // bubble_sort_iterative(vec);

    int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
    bubble_sort_recursive(arr,11);
    cout<<"iterative bubble sort output : ";
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"recursive bubble sort output : ";
    for(auto i: arr){
        cout<<i<<" ";
    }

}