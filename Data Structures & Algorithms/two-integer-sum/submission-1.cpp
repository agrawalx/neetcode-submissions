class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m; 
        for (int i = 0;i<nums.size(); i++) {
            int difference = target - nums[i]; 
            if (m.count(difference) == 0 ) {
                m[nums[i]] = i; 
            } else {
                return vector<int> {m.find(difference)->second, i}; 
            }
        }
    }
};
