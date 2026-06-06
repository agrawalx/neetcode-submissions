class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> hm; 
        for (int i = 0; i < strs.size(); i++) {
            vector<int> count(26); 
            string str = strs[i];
            for (int j=0; j < str.size(); j++) {
                count[str[j]-'a']++; 
            }
            if (hm.count(count) == 0) {
                hm[count] = vector<string> {str}; 
            } else {
                hm[count].push_back(str); 
            }
        }
        vector<vector<string>> ans; 
        for (const auto&[key, value]: hm) {
            ans.push_back(value); 
        }
        return ans; 
    }
};
