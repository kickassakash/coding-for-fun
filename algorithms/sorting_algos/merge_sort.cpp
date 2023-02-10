#include<bits/stdc++.h>
using namespace std;

void merge(int vec[],int l ,int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int temp1[n1];
    int temp2[n2];

    for(int i=0;i<n1;i++){
        temp1[i]= vec[l+i];
    }
    for(int i=0;i<n2;i++){
        temp2[i]= vec[mid+1+i];
    }

    int i=0;int j=0;int k=l;
    while(i<n1 && j<n2){
        if(temp1[i]<temp2[j]){
            vec[k] = temp1[i];
            i++;
        }
        else{
            vec[k] = temp2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        vec[k] = temp1[i];
        i++;k++;
    }
    while(j<n2){
        vec[k]= temp2[j];
        j++;k++;
    }
}

void merge_sort(int vec[],int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        merge_sort(vec,l,mid);
        merge_sort(vec,mid+1,r);
        merge(vec,l,mid,r);
    }
}

int main(){
    int vec[]= {6,3,4,2,8,1,0,-69};
    cout<<"array before merge sort : ";
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    merge_sort(vec,0,7);
    cout<<"array after merge sort : ";
    for(auto i: vec){
        cout<<i<<" ";
    }
}