class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Check
        vector<vector<string>> result;

        if (strs.empty() || strs.size() < 1 || strs.size() > 10000) {
            return result;
        }

        // Check if have uppercase
        for (const auto& str : strs) {
            for (unsigned char c : str) {
                if (std::isupper(c)) {
                    return result;  // Found one, exit early
                }
            }
        }

        unordered_map<string, int> map;
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());

            if (map.find(key) != map.end()) {
                // Đã có từ phía trước là anagram với word
                int row = map[key];
                result[row].push_back(strs[i]);
            } else {
                // Chưa có từ nào phía trước là anagram với word
                result.push_back({strs[i]});
                map[key] = result.size() - 1;
            }
        }
        return result;
    }
};
