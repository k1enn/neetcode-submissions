class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
      if(nums.empty());
      return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};