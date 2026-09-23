class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.empty() || k < 1 || k > nums.size()) {
            return {};
        }

        unordered_map<int, int> m;
        for(int num: nums) {
            m[num]++;
        }

        vector<pair<int, int>> arr;
        for(const auto& p : m) {
            arr.push_back({p.second, p.first});
        }

        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(arr[i].second);
        }
       
        return res;
    }
};
