class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> count_s; 
        map<char, int> count_t; 
        if (s.size() != t.size()) {
            return false; 
        }
        for (int i = 0; i<s.size(); i++) {
            count_s[s[i]]++; 
            count_t[t[i]]++; 
        }
        for (const auto& [key,value]: count_s) {
            if (count_t[key] != value) {
                return false; 
            }
        }
        return true; 
    }
};
