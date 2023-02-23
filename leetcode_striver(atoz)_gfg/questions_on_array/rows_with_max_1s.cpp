//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   
	   //unintuitive method (bruteforce) - time complexity: O(n*m)
	   //space complexity - O(1)
	   // int maxc = 0;
	   // int row=0;
	   // for(int i=0;i<n;i++){
	   //     int count = 0;
	   //     for(int j=0;j<m;j++){
	   //         if(arr[i][j] == 1){
	   //             count++;
	   //         }
	   //     }
	   //     if(maxc<count){
	   //         maxc = count;
	   //         row = i;
	   //     }
	   // }
	   // if(maxc == 0){
	   //     return -1;
	   // }
	   // else{
	   //     return row;
	   // }
	   
	   //banger method - explanation one note
	   int row = -1;
	   int i =0,j=m-1;
        while(i<n && j>=0){
            if(arr[i][j] == 1){
                row = i;
                j--;
            }
            else i++;
        }
        return row;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends