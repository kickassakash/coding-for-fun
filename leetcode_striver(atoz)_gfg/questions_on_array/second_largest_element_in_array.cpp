//link: https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

//in this problem we need to find the second largest element
//we have many ways to solve this problem
/*
1.sort the array and return the elemnt at index index n-2(where n
is size of the array) this method will take O(nlogn) time and if 
we store the sorted array in a different container then it will take 
O(n) space complexity
*/

/*
2.use max heap and turn the array into heap.and then pop the top 
element and return the top element after heapifying the array.
this will take O(n+logn) == O(n) time complexity and if we store 
the max heap in a different container then it will take O(n) but if 
we heapify the given array then it'll take O(1) space complexity

note:: for some reason this method doesn't work in fgf lol!
*/

/*
3.loop 2 times and return the second largest element(close to bruteforce)
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    if(n==1) return -1;
	    int fl = INT_MIN;
	    int fl2 = INT_MIN;
	   // for(int i =)
	   //make_heap(arr,arr+n);
	   //priority_queue<int> pr(arr,arr+n);     this is max heap implementation
	   //pr.pop();                              but for some reason it doesn't work
	   //int top = pr.top();
	   //return top;
	   for(int i =0;i<n;i++){
	       if(arr[i]>fl){
	           fl = arr[i];
	       }
	   }
	   for(int i =0;i<n;i++){
	       if(arr[i]>fl2 && arr[i]!=fl){
	           fl2 = arr[i];
	       }
	   }
	   if(fl2 == INT_MIN) return -1;
	   return fl2;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends