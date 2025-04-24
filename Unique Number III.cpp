/*
Date: 24 April 2025
Problem: Unique Number III ( all the elements appears exactly Thrice except one element, you have to return that element ) 
*/

// Approach: ( using map data structure ) 
// TC: O(N)
// SC: O(N)

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        map<int, int> mp;
        for(num : arr) {
            mp[num]++;
        }
        
        for(auto &it: mp) {
            if(it.second == 1) 
            return it.first;
        }
        return -1;
    }
};
