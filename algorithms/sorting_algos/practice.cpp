#include<bits/stdc++.h>
using namespace std;

//seletion sort --> time complexity O(n^2) || spae complexity O(1) 
void selection_sort(int vec[],int size){
    for(int i=0; i<size; i++){
        int min= vec[i+1];
        int index;
        for(int j=i+2;j<size;j++){
            if(vec[j]<min){
                min = vec[j];
                index = j;
            }
        }
        if(vec[i]>min){
            swap(vec[i],vec[index]);
        }
    }
}

//code for insertion sort --> time complexity best case = O(n) worst case = O(n^2)
//spae complexity = O(n)
vector<int> Insertion_sort(vector<int> vec){
    // vector<int>temp;
    vector<int> ans(vec.size());
    ans[0] = vec[0];
    for(int i=1,j;i<vec.size();i++){
        j=i;
        ans[i] = vec[i];
        while(ans[j]<ans[j-1] && j>0){
            swap(ans[j],ans[j-1]);
            j--;
        }
    }
    return ans;
}


//merge func for merge sort
void merge(int arr[],int left,int mid,int right){
    int n1= mid-left+1;
    int n2 = right-mid;

    int arr1[n1],arr2[n2];
    
    for(int i=0;i<n1;i++){
        arr1[i] = arr[left+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i] = arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = arr1[i];
        i++;k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;k++;
    }
}
// merge sort --> time complexity O(n*logn) space complexity O(n)
void mergesort(int arr[],int left ,int right){
    if(left<right){
        int mid = (left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left ,mid,right);
    }
}

//code for quicksort
int partition(int arr[],int left,int right){
    int pivot = arr[right];
    int w = left-1;
    for(int p = left; p < right; p++){
        if(arr[p]<pivot){
            w++;
            swap(arr[p],arr[w]);
        }
        // p++;
    }
    swap(arr[w+1],arr[right]);
    return w+1;
}
//quicksort --> time complexity : average = O(n*log(n)) , worst = O(n^2)
//space complexity : 0(1)
void quicksort(int arr[],int left,int right){
    if(left<right){
        int pivot_index = partition(arr,left,right);
    quicksort(arr,left,pivot_index-1);
    quicksort(arr,pivot_index+1,right);
    }
    
}

int main() {
    // vector<int> vec ={5,4,3,2,1,-1,-2,0,69,108,-420} ; //insertion sort
    int arr[]= {5,4,3,2,1,-1,-2,0,69,108,-420};
    int size = sizeof(arr)/sizeof(arr[0]);
    // vector<int> ans = Insertion_sort(vec); //used for insertion sort
    //selection_sort(arr,size);
    //mergesort(arr,0,size-1);
    quicksort(arr,0,size-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
}