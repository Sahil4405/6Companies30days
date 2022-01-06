
// Question Link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution{
public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map <int, int> mp;
        int rem,freq;
        for(auto x : nums)
            mp[x%k]++;
            
        if(mp[0] %2 != 0) 
            return false;
            
        for(auto x : mp)
        {   rem = x.first;
            freq = x.second;
            if(rem != 0 && mp[k-rem] != freq)
                return false;
        }
        return true;
    }
};