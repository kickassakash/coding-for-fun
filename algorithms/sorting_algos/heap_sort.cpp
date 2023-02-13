#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[10]; //={12,8,1,2,3,0,-1,11,9};
    int size=5;
    //int temp_size = size;//used for heap_sort;
    int capacity = 10;

    void heapify(int index){
        int left = 2*index +1;
        int right = 2*index+2;
        int max_index = index;
        if(left<size && arr[left]>arr[max_index]){
            max_index = left;
        }
        if(right<size && arr[right]>arr[max_index]){
            max_index = right;
        }
        if(max_index != index){
            swap(arr[max_index],arr[index]);
            heapify(max_index);
        }
    }

    // void build_heap(int arr1[],int arr_size){
        

    // }
    void print_heap(){
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }
    void heap_sort(int arr1[],int arr_size){
        // build_heap(arr,arr_size);
        size = arr_size;
        for(int i=0;i<size;i++){
            arr[i] = arr1[i];
        }
        for(int i=(size-2)/2;i>=0;i--){
            heapify(i);
        }
        for(int i=arr_size-1;i>=0;i--){
            swap(arr[0],arr[i]);
            size--;
            //cout<<arr[size-1]<<" ";
            //size--;
            heapify(0);
        }
        
    }
};



int main(){
    //int arr[] = {12,8,1,2,3,0,-1,11,9};
    //make_heap(vec.begin(), vec.end());
    Heap h;
    int arr1[] = {99,1,-99,100,69};
    h.heap_sort(arr1,5);

    h.print_heap();
    //h.build_heap(arr,9);
    // cout<<"max heap after build: ";
    // h.print_heap();
    // h.heap_sort(arr,9);
    //cout<<"array after using heap sort: ";
    //h.print_heap();
    

}