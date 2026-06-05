class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans; 
        int i = 0;
        while (i < 2) {
            for (int j = 0; j<nums.size() ; j++) {
            cout << j; 
            ans.push_back(nums[j]); 
            }
        i++; 
        }  
        return ans; 
    }
};