#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {13,1,6,9,3,2,10,0,-1};
    priority_queue<int > max_heap(arr,arr+9);//normal max_heap priority queue initialized
    priority_queue<int,vector<int>,greater<int>> min_heap(arr,arr+9);
    //min_heap priority queue initialization
    //available functions are ->1.top()= returns top element/index 0 element
    //                          2.push(int val)=pushs element in queue
    //                            3.pop()=pops top element
    //                          4.to convert a vector/array into min/max heap then use
    //                          max_heap(arr,arr+size);
    cout<<"top/max element in max heap: "<<max_heap.top()<<endl;
    cout<<"top/min element in min heap: "<<min_heap.top()<<endl;
}