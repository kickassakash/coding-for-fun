//link : https://leetcode.com/problems/valid-palindrome/
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string temp = "";
        for(int i =0;i<s.length();i++){
            if(isalnum(s[i])) temp+=tolower(s[i]);
        }
        string rev= temp;
        reverse(temp.begin(),temp.end());
        cout<<rev<<endl;
        cout<<temp;
        if(rev == temp) return true;
        else return false;
}
int main() {
    string str = "A man, a plan, a canal: Panama";
    bool val = isPalindrome(str);
    cout<<endl<<val;
    return 0;
}