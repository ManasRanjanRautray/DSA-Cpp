/* gfg
Rotate a Matrix by 180 Counterclockwise

Given a 2D square matrix mat[][] of size n x n, rotate it by 180 degrees without using extra space.

Note: You must rotate the matrix in place and modify the input matrix directly.

Examples:

Input: mat[][] = [[1, 2],
                [3, 4]]
Output: [[4, 3], 
        [2, 1]]
Input:  mat[][] = [[1, 2, 3], 
                [4, 5, 6],
                [7, 8, 9]]
Output: [[9, 8, 7], 
        [6, 5, 4], 
        [3, 2, 1]]*/

#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        
        // Code here
        int n=mat.size();
        
        //row wise constant j
        for(int j=0;j<n;j++){
          int   start=0,end=n-1;
        
        while(start<end){
            swap(mat[start][j],mat[end][j]);
            end--;start++;
        }}
        //col wise constant i
        for(int i=0;i<n;i++){
            int start=0,end=n-1;
        
        while(start<end){
            swap(mat[i][start],mat[i][end]);
            end--;start++;
        }
        }
        
    }
};