class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int count[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--; // First i was using s[i]
        }

        for (int val : count) {
            if (val != 0) return false;
        }

        return true;
    }
};
