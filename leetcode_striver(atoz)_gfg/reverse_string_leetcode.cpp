//link to problem:: https://leetcode.com/problems/reverse-integer/description/
/* in leetcode int can have at most 4byte storage so its'kind of 
different , but in normal case ==>
1. we can store the int to string and reverse it then convert into
int again
2.we can divide the numbers and store them in vector then multiply
and get the result integer */


#include<bits/stdc++.h>
using namespace std;

int reverse_using_arithmatic(int x) {
        bool is_negative = (x<0) ?true :false;
        vector<int> vec;
        int temp=0;
        while(x){
            temp = x%10;
            vec.push_back(abs(temp));
            x = x/10;
        }
        int res=0;
        int i=vec.size()-1,j;
        for(i,j=0;i>=0;i--,j++){
            int mul = pow(10,i);
            res += abs(vec[j]*mul);
        }
        cout<<vec[2];
        if(is_negative) res = -res;
        return res;
}

int reverse_using_string(int val){
    bool is_negative = (val<0) ?true :false;//to keep track if given number is negative 
    string str = to_string(val);
    reverse(str.begin(),str.end());
    int ans = stoi(str);
    if(is_negative) ans = -ans;
    return ans;
}


int main(){
    int input = -123;
    int output = reverse_using_string(input);
    cout<<output;
}