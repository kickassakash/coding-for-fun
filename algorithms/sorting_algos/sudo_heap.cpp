#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];//we store heap data in arrary
    int size = 0;

    void insert(int val){
        size = size +1;
        int index = size;
        arr[index] = val;

        while(index >1){
            int parent = index/2;
            if(arr[parent] <arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void remove_node(){
        if (size == 0){
            cout<<"heap is empty"<<endl;
        }
        arr[1] = arr[size];
        size--;

        int i =1;
        int left_child = 2*i;
        int right_child =2*i+1;
        while(i<size){
            if(arr[i]<arr[left_child] && left_child<size){
                swap(arr[i] , arr[left_child]);
                i = left_child;
            }
            else if(arr[i]<arr[right_child] && right_child<size){
                swap(arr[i] , arr[right_child]);
                i= right_child;
            }
            else{
                return;
            }
        }
    }
};

void max_heapify(int arr[],int n,int index){
    int largest = index;
    int left_child_idx = 2*index;
    int right_child_idx = 2*index +1;

    if(left_child_idx<n && arr[largest]<arr[left_child_idx]){
        // swap(arr[largest], arr[left_child_idx]);
        largest = left_child_idx;
    }
    if(right_child_idx<n && arr[largest]<arr[right_child_idx]){
        // swap(arr[right_child_idx],arr[largest]);
        largest = right_child_idx;
    }
    if(largest != index){
        swap(arr[largest],arr[index]);
        max_heapify(arr,n,largest);
    }
}

int main(){
    Heap h;
    h.insert(1);
    h.insert(2);
    h.insert(4);
    h.insert(5);
    h.print();
    h.remove_node();
    h.print();

    int arr[] = {-1, 1,4,2,3,5};
    int n = 5;
    for(int i=5/2;i>0;i--){
        max_heapify(arr,n,i);
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
}