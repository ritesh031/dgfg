/*
Date: 02 May 2025
Problem: Bitonic Point ( find that element before that all the element in increasing order and after that all in decreasing order ) 
*/

// Intuition: ( Brute Force ) 
// Find the greatest element in array using linear search but it will take TC: O(N) 

// Better Approach: 
// so that We use the Binary search to find the greatest element in array and that will the bitonic point 
// TC: O(logn)

class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        
        // Used binary search to find the greater element in given array
        // and that's the required bitonic point
        int result = -1; 
        int start = 0;
        int end = arr.size() -1;
        
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(arr[mid] < arr[mid+1]) {
                start = mid+1;
            }
            else if (arr[mid] > arr[mid+1]) {
                result = arr[mid];
                end = mid-1;
            }
        }
        return result;
    }
};
