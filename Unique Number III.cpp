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

// Optimal Approach: ( Bit magic )
// TC: O(n)
// SC: O(1)

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // CodeGenius
        int ele=0,mask,ones;
        for(int i=0;i<32;i++){
            ones=0;
            mask=(1<<i);
            for(int j=0;j<arr.size();j++){
                if(arr[j]&mask) ones++;
            }
            if((ones%3) !=0) ele|=mask;
        }
        return ele;
    }
};
