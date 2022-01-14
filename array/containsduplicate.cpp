class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
        unordered_map<int,int> m;
        
        for (auto x:nums) 
            m[x]++;
        
        for (int i = 0; i < nums.size(); i++) {
            if(m.find(nums[i]) != m.end()) {
                if( m[nums[i]] > 1)
                    return true;
            }
        }
        
        return false;
    }
};