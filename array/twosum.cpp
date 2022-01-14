 class Solution {
 public:
 	vector<int> twoSum(vector<int>& nums, int target) {
 		vector<int> result;
 		unordered_map<int, int> hash;

 		for (int i = 0; i < nums.size(); i++){
 			int sec_sum = target - nums[i];
 			if (i > 0){
 				auto it = hash.find(sec_sum);
 				if (it != hash.end()){
 					result.push_back(it->second);
 					result.push_back(i);
 					break;
 				}               
 			}                       
 			hash[nums[i]] = i;                        
 		}
 		return result;
 	}
 };