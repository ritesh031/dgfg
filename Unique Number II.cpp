/*
Date: 23 april 2025
Problem: Unique Number II ( return the two distinct element in sorted order that occurs execly once in given array )
*/

// Approach 1 ---- using map data stucture 
// TC: O(n) 
// SC: O(n)

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
         map<int, int> freq;
        
        // Count frequency of each number
        for (int num : arr) {
            freq[num]++;
        }
        
        vector<int> result;
        
        // Find the two numbers that occur exactly once
        for (auto& it : freq) {
            if (it.second == 1) {
                result.push_back(it.first);
            }
        }
        
        // Sort the result to return in increasing order
        sort(result.begin(), result.end());
        
        return result;
    }
};




// Approach 2 ---- xor 
// TC: O(N) 
// SC: O(1)

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // CodeGenius
        int xor_all=0;
        for(int it:arr) xor_all^=it;
        
        int set_bit=xor_all & -xor_all;
        int G1=0,G0=0;
        for(int it : arr){
            if(it & set_bit) G1^=it;
            else G0^=it;
        }
        if(G1<G0) return {G1,G0};
        else return {G0,G1};
    }
};
