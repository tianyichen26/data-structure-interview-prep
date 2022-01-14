class Solution {
public:
    int rob(vector<int>& nums) {
        const int n = nums.size();
        m_ = vector<int>(n, -1);
        return rob(nums, n - 1);
    }
private:
    int rob(const vector<int>& nums, int i) {
        if (i < 0) return 0;
        if (m_[i] >= 0) return m_[i];
        return m_[i] = max(rob(nums, i - 2) + nums[i], 
                           rob(nums, i - 1));
    }
    
    vector<int> m_;
};