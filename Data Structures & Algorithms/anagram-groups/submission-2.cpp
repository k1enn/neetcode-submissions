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
        for(int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            sort(word.begin(), word.end());

            if (map.find(word) != map.end()) {
                result[map[word]].push_back(strs[i]);
            } else {
            result.push_back({strs[i]});
            map[word] = result.size() - 1;
            }
        }

        return result;
    }
};
