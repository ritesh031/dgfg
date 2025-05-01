/*
Date: 01 May 2025
Problem: Pascal's Triangle 

Details: Given a positive integer n, return the nth row of pascal's triangle.
Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.
*/

// Applications of Pascal's Tringle: 
// For finding the nCr Value the Pascal's Triangle being used                  ( just go in pascal tree on nth row and rth column and return the value ) 

// Code: 
// Here we didn't return the whole pascal triangle, just returned the nth row of triangle ( on leetcode we return whole triangle ) 
// TC: O(n^2) approax 

class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        n--;
        int prev=1;
        vector<int>result;
        result.push_back(prev);
        for(int i=1;i<=n;i++){
            int curr  = prev*(n-i+1)/i;
            result.push_back(curr);
            prev=curr;
        }
        return result;
    }
};
