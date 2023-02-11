#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
        //using recursion::
        // if(n==0) return 0;
        // if(n==1) return 1;
        // return fib(n-1)+fib(n-2);


        //using dp and storing previous inputs
        // int arr[n+1];
        // if(n==1) return 1;
        // if(n==0) return 0;
        // arr[0]= 0;
        // arr[1]= 1;
        // for(int i =2;i<=n;i++){
        //     arr[i] = arr[i-1] +arr[i-2];
        // }
        // return arr[n];


        //3rd approach
        //binet's nth term formula is used here
        double phi = (sqrt(5) + 1) / 2;     
        return round(pow(phi, n) / sqrt(5));

}


int main(){
    int n =10;
    int result = fib(n);
    cout<<"10th fibonnachi number: "<<result<<endl;
}