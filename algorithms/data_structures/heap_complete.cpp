#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    public:
    int vec[10]= {40,20,30,35,25,80,32,100,70,60};
    int cap=10;
    int size=10;

    //
    // void heap_alloc(int capacity){
    //     vector<int> vec(capacity);
    //     size = 0;
    //     cap = capacity;
    // }
    void print_heap(){
        for(int i=0;i<size;i++){
            cout<<vec[i]<<" ";
        }
    }
    void build_heap(int arr[],int arr_size){
        size = arr_size;
        for(int i=0;i<size;i++){
            vec[i] = arr[i];
        }
        for(int i=(size-2)/2;i>=0;i--){
            min_heapify(i);
        }
    }

    void heap_updater(int index,int val){
        vec[index] = val;bool is_upped = false;
        for(int i =index;i !=0 && vec[parent(i)]>vec[i];){
            swap(vec[parent(i)],vec[i]);
            i=parent(i);
            is_upped = true;
        }
        if(!is_upped){
            min_heapify(index);
        }

    }
    int left_child(int index){
        return (2*index +1);
    } 
    int right_child(int index){
        return (2*index +2);
    }
    int parent(int index){
        return (index)/2;
    }
    int capacity(){
        return cap;
    }
    void insert(int val){
        if(size == cap) return;size++;
        vec[size-1]=val;
        for(int i=size-1;i != 0 && vec[parent(i)]>vec[i];){
            swap(vec[parent(i)],vec[i]);
            i = parent(i);
        }
    }
    void min_heapify(int index){
        int left = left_child(index);
        int right = right_child(index);
        int min = index;
        if( left <size && vec[min]>vec[left]){
            min = left;
        }
        if(right <size && vec[min]>vec[right]){
            min = right;
        }
        //cout<<"min = "<<min<<endl;
        if(min != index){
            swap(vec[min],vec[index]);
            min_heapify(min);
        }


    }
    int extract_min(){
        if(size == 0) return INT_MAX;
        if(size == 1){
            return vec[0];
            size--;
        } 
        swap(vec[0],vec[size-1]);
        size--;
        min_heapify(0);
        return vec[size];
    }

    
};

int main(){
    MinHeap heap;
    // heap.heap_alloc(10);
    //int val = heap.capacity();
    cout<<"heap size is: "<<heap.cap<<endl;
    // heap.insert(1);
    // heap.insert(3);
    // heap.insert(0);
    // cout<<heap.top()<<endl;
    // cout<<heap.mid()<<endl;
    // vector<int > vect = heap.vec;
    // for(auto i: vect){
    //     cout<<i<<" ";
    // }
    cout<<"min heap after applying heapify algo on array: ";
    heap.min_heapify(0);
    heap.print_heap();
    int ans = heap.extract_min();
    cout<<endl<<"heap after extracting/deleting min element : ";
    heap.print_heap();
    cout<<endl<<"heap after updating element at index 3 to 8 : ";
    heap.heap_updater(3,8);
    heap.print_heap();
    int arr[] = {10,5,20,2,4,8};
    heap.build_heap(arr,6);
    cout<<endl<<"building heap using build_heap function: ";
    heap.print_heap();
}