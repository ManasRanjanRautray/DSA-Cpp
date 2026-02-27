/*leetcode 48
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
*/


#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
     int n=mat.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
        int start=0,end=n-1;
        //row wise reverse
        while(start<end){
            swap(mat[i][start],mat[i][end]);
            start++;end--;
            
        }}
        //return mat[ ][ ];//no return here 
        
    }
};