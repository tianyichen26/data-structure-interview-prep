class NumArray {
public:
  NumArray(vector<int> nums): sums_(nums) {      
    if (nums.empty()) return;            
    for (int i = 1; i < nums.size();++i)
      sums_[i] += sums_[i - 1];
  }
 
  int sumRange(int i, int j) {
    if (i == 0) return sums_[j];
    return sums_[j] - sums_[i-1];
  }
private:    
  vector<int> sums_;
};