//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  //this uses inbuilt __gcd function to calculate gcd 
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long>vec;
        long long val = __gcd(A,B);
        long long lcm = (A*B)/val;
        vec.push_back(lcm);
        vec.push_back(val);
        return vec;
    }
    //this is simple gcd calculator
    long long gcd(long long A, long long B){
        if(B==0) return A;
        return gcd(B,A%B);
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends