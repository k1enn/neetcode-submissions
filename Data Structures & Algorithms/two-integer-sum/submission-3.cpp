class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      if(nums.empty()) return {};

      unordered_map<int, int> m;
      for(int i = 0; i < nums.size(); i++) {
        int x = target - nums[i];
        if (m.contains(x)) return {m[x], i};
        m.insert({nums[i], i});

      }
      return {};
    }
};
