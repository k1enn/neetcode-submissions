class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         /*
        Sort cái mảng
        Thêm nó vào unordered_map theo chỉ số
        Tạo pair và sắp nó theo tự tự tăng dần
        Pop từng pair ra từ đuôi theo số K
        */
        if (nums.size() > 0 || k > 1 || k < nums.size()) {

        // Sắp xếp mảng tăng dần và khởi tạo
        sort(nums.begin(), nums.end());
        unordered_map<int, int> m;

        // Mỗi slot sẽ có value theo số đếm
        for (auto x : nums) {
            m[x]++;
        }

        // Tạo pair và sort nó tăng dần
        vector<pair<int, int>> arr;
        for (const auto& p : m) {
            arr.push_back({p.second, p.first});
        }
        // Sắp xếp số count giảm dần 
        sort(arr.rbegin(), arr.rend());

        // Thiết lập trả về Top K
        vector<int> res;
        for(int i = 0; i < k; i++) {
            // Trả về top K chứ ko trả về số lần đếm của nó
            res.push_back(arr[i].second);
        }

        return res;
        }
        return {};
    }
};
