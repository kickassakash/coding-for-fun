//link: https://practice.geeksforgeeks.org/problems/nearly-sorted-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int> vec(num);
        priority_queue<int> pq(arr,arr+num);
        while(num--){
            vec[num]=pq.top();
            pq.pop();
        }
        return vec;
        
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends