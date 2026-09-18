class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) {
            return false;
        }
        unordered_set<int> set(nums.begin(), nums.end());
        return set.size() < nums.size();
    }
};