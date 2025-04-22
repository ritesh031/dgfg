/*
Date: 22 April 2025
gfg potd
Problem: Unique Number I ( ever number occurs exactly 2 time except one number, return that number ) 
*/

// Input: [ 1, 2, 1, 5, 5]
// Output: 2 

// Code: 
// TC: O(n)
//SC: O(1)

class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++) {
            mp[arr[i]]++;
        }
        
        for(auto it: &arr) {
            if(it.second == 1) 
            return it.first;
        }
        return -1;
    }
};
