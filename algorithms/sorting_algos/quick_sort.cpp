#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}

int partition(int arr[],int l, int r){
    int pi = arr[r];
    int w = l-1;

    for(int p =l; p < r; p++){
        if(arr[p] <pi){
            w++;
            swap(&arr[p],&arr[w]);
        }
    }
    swap(&arr[w+1],&arr[r]);
    return w+1;
}

void quick_sort(int arr[],int l,int r){
    if(l<r){
        int pivot = partition(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);
    }
    
}

int main(){
    int arr[] = {6,3,4,2,8,1,0,-69};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,size-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
}