#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution {
  public:
    int diagonalSum(vector<vector<int> >& mat) {
        // Code here
        //1st diagonal
        int row=mat.size(),col=mat[0].size();
        int first=-1,second=-1;
        for(int i=0;i<row;i++){
            first+=mat[i][i];
        }
        //2nd diagonal 
        int i=0,j=col-1;
        while(i<col){
            second+=mat[i][j];
            i++,j--;
        }
        return first+second;
    }
};