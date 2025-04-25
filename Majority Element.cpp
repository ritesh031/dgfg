/*
Date: 25 April 2025 
Problem: Majority Element ( return that element from given array that appears more than arr.size()/2 ) 
*/

// Better Solution -- Map data Structure 
// TC: O(N)
// SC: O(N) 

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int, int> mp;
        
        for(int num: arr) {
            mp[num]++;
        }
        
        for(auto it: mp) {
            if(it.second > (arr.size()/2)) 
            return it.first;
        }
        return -1;
    }
};
