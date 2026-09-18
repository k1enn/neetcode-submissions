class Solution {
public:
    bool isAnagram(string s, string t) {
          unordered_map<char, int> map_s;
        unordered_map<char, int> map_t;
          for(int i = 0; i < s.size(); ++i) {
            char c = s[i];
            map_s[c]++;
           
        }
 for(int j = 0; j < t.size(); ++j) {
            char c = t[j];
              map_t[c]++;
          }

        return map_s == map_t;
    }
};
