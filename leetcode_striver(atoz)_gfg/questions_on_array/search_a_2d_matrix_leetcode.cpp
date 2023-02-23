//link:https://leetcode.com/problems/search-a-2d-matrix/description/
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        int r = row*column -1;
        int l = 0;
        while(l<=r){
            int mid = (l+r)/2;
            //we use imagenary indexes to think the 2d array a a 1d array
            //here to get the row number we do -> (index/#of_columns)
            //here to get the column number we do -> (index%#of_columns)
            //using this scheme we can apply simple binary search on the array
            if(matrix[mid/column][mid%column] ==target) return true;
            else if (matrix[mid/column][mid%column] >target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return false;
}

int main(){
    vector<vector<int>> vec = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target =3;
    cout<<"Target present : "<<searchMatrix(vec,target)<<endl;
}