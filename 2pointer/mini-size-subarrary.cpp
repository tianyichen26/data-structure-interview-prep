class Solution {
public:
  int minSubArrayLen(int s, vector<int>& nums) {
    int l = 0;
    int r = 0;
    int t = 0;
    int ans = INT_MAX;
    while (l < nums.size()) {
      while (t < s && r < nums.size()) t += nums[r++];      
      if (t < s) break;
      ans = min(ans, r - l);      
      t -= nums[l++];
    }
    return ans == INT_MAX ? 0 : ans;      
  }
};