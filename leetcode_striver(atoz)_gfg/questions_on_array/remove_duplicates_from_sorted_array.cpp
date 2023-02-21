//link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/


/*
our solution iterates just one time and doesn't store any extra information(except)
some constant terms(temp,i,j)... so time complexity is O(n) and space complexity
is O(1)... solution idea in one note.
*/
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
        int temp,i,j;
        temp = arr[0];
        if(arr.size()==1) return 1;
        for(i=1,j=0;i<arr.size();){
            if(temp == arr[i]) i++;
            else{
                j++;temp = arr[i];
                arr[j] = arr[i];
                i++;
            }
        }
        return j+1;
}

int main(){
    vector<int> vec = {0,0,1,1,2,2,2,3,3,4,4,5};
    int index = removeDuplicates(vec);
    cout<<"array after removeing duplicates";
    for(int i =0;i<index;i++){
        cout<<vec[i]<<" ";
    }
}