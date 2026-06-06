class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest = ""; 
        int shortest = strs[0].size();
        // finding minimum size element 
        for (const string& s : strs) {
            shortest = min(shortest, (int)s.size());
        }
        for (int i=0; i < shortest; i++) {
            int j = 1;
            while (j<strs.size()) {
                if (strs[j][i] != strs[j-1][i]) {
                    return strs[0].substr(0,i); 
                }
                j++; 
            }      
        }
        return strs[0].substr(0, shortest);
    }
};