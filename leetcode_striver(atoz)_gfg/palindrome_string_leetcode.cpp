//https://leetcode.com/problems/palindrome-number/description/
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isPalindrome(int x) {
        string str = to_string(x);
        string temp = str;
        reverse(str.begin(),str.end());
        return (str == temp) ? true :false;
    }

int main(){
    int var = 123;
    int var2 = -343;
    int var3 = 121;
    cout<<"var is palindrome? : "<<isPalindrome(var)<<endl;
    cout<<"var2 is palindrome? : "<<isPalindrome(var2)<<endl;
    cout<<"var3 is palindrome? : "<<isPalindrome(var3)<<endl;
}



