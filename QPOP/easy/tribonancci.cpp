/*
leetcode 1137

The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

 

Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
Example 2:

Input: n = 25
Output: 1389537
 */

class Solution {
public:
    int tribonacci(int n) { if (n==0){
            return 0;
        }
        else if(n==1 || n==2)
        {return 1;}
        else{
        int first =0,second=1;
        int third=1;
        for (int i=0;i<n;i++)
        {
            int four = first+second+third;

            first=second;
            second=third;
            third=four;
        }
        return first;}

        
    }
};