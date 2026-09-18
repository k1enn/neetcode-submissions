class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> map_s;

        // Assign to hash map
        for (char c : s) {
            map_s[c]++;
        }

        // Check
        for (char c : t) {
            if(map_s.find(c) == map_s.end()) {
                return false;
            }

            map_s[c]--;
            if(map_s[c] == 0) {
                map_s.erase(c);
            }
        }

        return map_s.empty();
    }
};
